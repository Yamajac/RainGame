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
Background = HomeFirstFloor.png
; This long string of numbers is determining the collisions. You can use any character as a tile type. Here I'm using 0/1 as non colliding tiles, 2 as colliding tiles, and 3/4 as portals depending on the screen. 
; Define what each tile type does. No definition = normal collision, no hook.
; 0 = no collision
; 1 = no collision, random encounters (currently not implemented)
; 2 = Portal to another screen
; 3 = Collision, Swap Collisions, one-way
; 4 = No collision, Swap Collissions, one-way
; 5 = No collision, when all of these have entities on them trigger an event
; Every other character is normal collision, with a hook
ScreenWidth  = 8
ScreenHeight = 8
Collisions=000000000001111a111111111111111111101111111011110111110101111101

Tilea = 2
Xa      = 7
Ya      = 1
Screena = HomeGroundFloor