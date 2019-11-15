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
Background = ExampleScreen.png
; This long string of numbers is determining the collisions. You can use any character as a tile type. Here I'm using 0/1 as non colliding tiles, 2 as colliding tiles, and 3/4 as portals depending on the screen. 
Collisions =00000000000000000000000000000000044400000000000444444000000000444004000c0000044440410a4400004404444044400000444444440000000444444440000000000444440000000000444444000000000000400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
; Define what each tile type does. No definition = normal collision, no hook.
; 0 = no collision
; 1 = no collision, random encounters (currently not implemented)
; 2 = Portal to another screen
; 3 = Collision, Swap Collisions, one-way
; 4 = No collision, Swap Collissions, one-way
; 5 = No collision, when all of these have entities on them trigger an event
; Every other character is normal collision, with a hook

; You can also define tiles in the [Variables] section in the game's main file
Tiled = 2
Tilea = 3
Tileb = 3

; Define sound files for each tile
; These will play when the player tries to walk onto that tile type
; For common tiles that will sound the same across screens, 
; you can define them in the [Variables] section in the game's main file.
Sounda = PP_Heavy_Impact_1_1
Soundb = PP_Heavy_Impact_1_2
Soundc = stepdirt_7

; Set the screen and x/y the player gets sent to when colliding with a tile of type 3
Xd      = 7
Yd      = 5
Screend = ExampleScreen2

; Set the FROM/TO tile types as well as the object layer (if any) to be drawn over the screen
; Can have up to 10 sets of tiles get swapped
; Prefix the ObjectLayer name with > to delete that object layer
Froma        = ca
Toa          = db
ObjectLayera = OpenDoor.png

Fromb        = db
Tob          = ca
ObjectLayerb = >OpenDoor.png

; You can hook into a collision with ANY tiletype by creating a measure with a group of that tile. 
; Use Disabled = 1 and group = NoUpdate | TileX

[ExampleHook]
Measure  = Calc
Disabled = 1
Group    = NoUpdate | Tile6
OnUpdateAction = [!Log "Hey you tried to hit the lever!" Debug]
