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
Collisions =2222222t202b0002222200220b2220t2t200002000b2022220000020b2202222200002022202t22220a020020022333322220020000333332p2t22000555533322222000555533322t2200005555553222000005555553322000000555555500000000055555500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
; Define what each tile type does. No definition = normal collision, no hook.
; 0 = no collision
; 1 = no collision, random encounters (currently not implemented)
; 2 = Portal to another screen
; 3 = Collision, Swap Collisions, one-way
; 4 = No collision, Swap Collissions, one-way
; 5 = No collision, when all of these have entities on them trigger an event
; Every other character is normal collision, with a hook
Tilea = 2
Tilep = 5

Soundp = stepdirt_7

; Set the screen and x/y the player gets sent to when colliding with a tile of type 4
Xa      = 11
Ya      = 5
Screena = ExampleScreen

; Entity stuff
Entities = Slime1|Slime2|Slime3|Box1|Box2

; Entities need to be manually placed in the world for now. 
; Give them an X, a Y, Entity type and an Image
; 0 = Pushed on collision
; 1 = battle (not currently implemented)
Slime1X     = 9
Slime1Y     = 9
Slime1Type  = 1
Slime1Image = Slime

Slime2X     = 8
Slime2Y     = 6
Slime2Type  = 1
Slime2Image = Slime

Slime3X     = 12
Slime3Y     = 4
Slime3Type  = 1
Slime3Image = Slime

Box1X     = 1
Box1Y     = 4
Box1Type  = 0
Box1Image = Box

Box2X     = 5
Box2Y     = 6
Box2Type  = 0
Box2Image = Box

; You can hook into a collision with ANY tiletype by creating a measure with a group of that tile. 
; Use Disabled = 1 and group = NoUpdate | TileX

[ExampleHook]
Measure  = Calc
Disabled = 1
Group    = NoUpdate | Tilet
OnUpdateAction = [!Log "Hey you bumped a tree!" Debug]
