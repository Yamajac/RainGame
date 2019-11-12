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
Collisions = 0000000000000000022222000000000221112220000000211111120000000211122122232200211112112411200211211112111200221111111122200021111111120000022221111122000000021111112000000022221222000000000022200000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
; Define what each tile type does. No definition = normal collision, no hook.
; 0 = no collision
; 1 = no collision, random encounters (currently not implemented)
; 2 = Portal to another screen
; 3 = Collision, Swap Collisions, one-way
; 4 = No collision, Swap Collissions, one-way
; Every other character is normal collision, with a hook
Tile0 = 0
Tile1 = 0
Tile3 = 1
Tile4 = 2

; Set the screen and x/y the player gets sent to when colliding with a tile of type 4
X4      = 11
Y4      = 5
Screen4 = ExampleScreen

; You can hook into a collision with ANY tiletype by creating a measure with a group of that tile. 
; Use Disabled = 1 and group = NoUpdate | TileX

[ExampleHook]
Measure  = Calc
Disabled = 1
Group    = NoUpdate | Tile3
OnUpdateAction = [!Log "Hey you tried to go through the door!" Debug]