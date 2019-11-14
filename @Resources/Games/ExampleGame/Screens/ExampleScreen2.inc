;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;   This is where the screens are defined. The background image, and special data
;   For all of the tiles, any events, triggers, etc.
;
;   Some of the more standard events can be handled in-engine by calling
;   various functions. But you can also hook into different events for non-standard
;   event handling if you wanted.
;    
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; This is where we define pretty much everything in the game screen.
[Variables]
; The background image for this screen. You can forego this and draw the screen yourself if you'd prefer more granular control. 
Background = ExampleScreen2.png
; This long string of numbers is determining the collisions. You can use any character as a tile type. Here I'm using 0/1 as non colliding tiles, 2 as colliding tiles, and 3/4 as portals depending on the screen. 
Collisions =000000050204200000002200240222505022220220402000022222024002000002222020002050000232022022000000000002020200000000050002211110000000022211110000050022221111110000022221111110000222222111111122222222211111122222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
; Define what each tile type does. No definition = normal collision, no hook.
; 0 = no collision
; 1 = no collision, random encounters (currently not implemented)
; 2 = Portal to another screen
; 3 = Collision, Swap Collisions, one-way
; 4 = No collision, Swap Collissions, one-way
; Every other character is normal collision, with a hook
Tile0 = 0
Tile1 = 1
Tile3 = 2
Tile4 = 0

; Set the screen and x/y the player gets sent to when colliding with a tile of type 4
X3      = 11
Y3      = 5
Screen3 = ExampleScreen

; You can hook into a collision with ANY tiletype by creating a measure with a group of that tile. 
; Use Disabled = 1 and group = NoUpdate | TileX

[ExampleHook]
Measure  = Calc
Disabled = 1
Group    = NoUpdate | Tile5
OnUpdateAction = [!Log "Hey you bumped a tree!" Debug]
