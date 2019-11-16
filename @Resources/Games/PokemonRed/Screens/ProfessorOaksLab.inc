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
Background = ProfessorOaksLab.png
; This long string of numbers is determining the collisions. You can use any character as a tile type. Here I'm using 0/1 as non colliding tiles, 2 as colliding tiles, and 3/4 as portals depending on the screen. 
; Define what each tile type does. No definition = normal collision, no hook.
; 0 = no collision
; 1 = no collision, random encounters (currently not implemented)
; 2 = Portal to another screen
; 3 = Collision, Swap Collisions, one-way
; 4 = No collision, Swap Collissions, one-way
; 5 = No collision, when all of these have entities on them trigger an event
; Every other character is normal collision, with a hook
ScreenWidth  = 10
ScreenHeight = 12
Collisions=000000000000001100001111111111111111000111111111111111111111000011000000001100001111111111111111111111111111111111aa1111
Scrolling = 0
Tilea = 2

; Set the screen and x/y the player gets sent to when colliding with a tile of type 3
Xa      = 12
Ya      = 48
Screena = PalletTown

; Entity stuff
Entities = Ball1|Ball2|Ball3

; Entities need to be manually placed in the world for now. 
; Give them an X, a Y, Entity type and an Image
; 0 = Pushed on collision
; 1 = battle (not currently implemented)
Ball1X     = 6
Ball1Y     = 3
Ball1Type  = 1
Ball1Image = PokeBallOverworld

Ball2X     = 7
Ball2Y     = 3
Ball2Type  = 1
Ball2Image = PokeBallOverworld

Ball3X     = 8
Ball3Y     = 3
Ball3Type  = 1
Ball3Image = PokeBallOverworld