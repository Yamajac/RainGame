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
Background = PalletTown.png
; This long string of numbers is determining the collisions. You can use any character as a tile type. Here I'm using 0/1 as non colliding tiles, 2 as colliding tiles, and 3/4 as portals depending on the screen. 
Collisions =000000000011000000000000000000110000000000001111111111111100000011111111111111000000111110111111110000000000000000111100000011111022222222000000111110222222220000001111102222222200000000000022222222000000111111111111110000001111111111111100000011111111112222000000000000000022220000001111111111222200000011111111112222000000111111111111110000001111111111111100000011111111111111000000010001000000000000001111111111111100000011111111111111000000011111112222110000000000000022220000000011111111222211000000111111112222110000001111111111111100000000111000000000000000112222111122220000001122221111222200000022221111222211000000222211112222110000000000002200000000000000000022000000000000000000220000000000000000002200000000000000000022000000000000000000220000000001111111111111111110011100001111000011100111000011110000111001100a0011100b0011100111111111111111111001111111111111111110011111111100000011100111000011000000111001111111110000001110011111111100c0001110011111111111111111100111111111000000111001110000111111111110011100001111111111100000000000000000000000000000000000000000
; Define what each tile type does. No definition = normal collision, no hook.
; 0 = no collision
; 1 = no collision, random encounters (currently not implemented)
; 2 = Portal to another screen
; 3 = Collision, Swap Collisions, one-way
; 4 = No collision, Swap Collissions, one-way
; 5 = No collision, when all of these have entities on them trigger an event
; Every other character is normal collision, with a hook
ScreenWidth  = 20
ScreenHeight = 54

Tilea = 2
Tileb = 2
Tilec = 2

; Set the screen and x/y the player gets sent to when colliding with a tile of type 3
Xa      = 3
Ya      = 7
Screena = HomeGroundFloor

Xb      = 3
Yb      = 7
Screenb = RivalGroundFloor

Xc      = 5
Yc      = 11
Screenc = ProfessorOaksLab
