;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
;   This is where all the data for this game is stored and where 
;   flags for the game are set.
;   
;   Things like player position, inventory, the currently active screen,
;   quest progression, etc.
;   
;   The actual screens are built separately, this file just stores save data.
;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; The Variables section contains all the save data as well as information the engine
; needs to know about this game. Various flags and settings can be set here.
; All of this information can be changed at will, but do be aware of what these 
; actually affect so as to not cause PEBKAC errors. 
; Everything except for the Current Screen, PlayerX and PlayerY can be 
; overwritten in the CurrentScreen file.
[Variables]
CurrentScreen  =ExampleScreen2
PlayerX        =7
PlayerY        =5

; The game will use Hero0.png, Hero1.png, Hero2.png and Hero3.png with a PlayerSprite of Hero.
; 0 = up
; 1 = left
; 2 = right
; 3 = down
; So make sure you have all those four images in the Game/Resources/Sprites folder
PlayerSprite   = Hero
GameWidth      = 15
GameHeight     = 20
TileSize       = 16
HudPanelColour = 40,40,40,255 
HudPanelWidth  = 130
ButtonSize     = 20
Scrolling      = 0


; You can define tiles here, for tiles that will persist across screens.
; Definitions in the individual screens will overwrite these if there
; are duplicates.
; I like to define the majority of tiles here so I know what I'm working 
; with as I develop more screens.
; A typical use for overwriting tile definitions would be to change 
; Tile0 to 1 so you get random encounters on that tile for that screen

; Basic Collision Tile
Tile0 =
; Dirt
Tile1 = 0
; Grass
Tile2 = 0
; Sand
Tile3 = 0
; Stone
Tile4 = 0
; Shallow Water
Tile5 = 0
;

; You can define sounds here as well. More information in ExampleScreen.inc
Sound0 = PP_Small_Impact_1_1
Sound1 = stepdirt_7
Sound2 = stepdirt_7
Sound3 = stepdirt_2
Sound4 = stepstone_3
Sound5 = stepwater_2



; This is where you drawn your game's HUD and controls.
; Use the various groups to have things hidden/shown at certain times.
; Be sure you add everything that gets drawn here to the Control group
; Or it'll cause problems when you're using the screen editor
; Or don't, I'm not the boss of you. But if you wanna use the screen editor
; Then add them to the Control group to make it less stupid.
; Still stupid, but less so.


; Drawing the Hud/Control panel background
[HudPanelBG]
Meter = Shape
Group = Control
Shape = Rectangle (#GameWidth# * #TileSize#), 0, #HudPanelWidth#, (#GameHeight# * #TileSize#) | FillColor #HudPanelColour# | StrokeWidth 0

; Drawing the Hud/Control panel title
[HudPanelTitle]
Meter = String
Group = Control
Text  = Hud Panel
FontSize = 15
X = (#GameWidth# * #TileSize# + #HudPanelWidth#/10)
Y = 5



; The buttons for controlling the game. Use the !UpdateMeasureGroup bang to call "functions"
;
; UpdateMeasureGroups:
; - MoveUp
; - MoveLeft
; - MoveRight
; - MoveDown
[UP]
Meter = Shape
Group = Control
Shape = Rectangle (#GameWidth# * #TileSize# + #HudPanelWidth# / 2 - #ButtonSize# / 2), (#GameHeight# * #TileSize# - #ButtonSize# * 4.2), #ButtonSize#, #ButtonSize# | FillColor 255,255,255,255 | StrokeWidth 0
LeftMouseUpAction = [!UpdateMeasureGroup MoveUp]

[LEFT]
Meter = Shape
Group = Control
Shape = Rectangle (#GameWidth# * #TileSize# + #HudPanelWidth# / 2 - #ButtonSize# * 1.8), (#GameHeight# * #TileSize# - #ButtonSize# * 3), #ButtonSize#, #ButtonSize# | FillColor 255,255,255,255 | StrokeWidth 0
LeftMouseUpAction = [!UpdateMeasureGroup MoveLeft]

[RIGHT]
Meter = Shape
Group = Control
Shape = Rectangle (#GameWidth# * #TileSize# + #HudPanelWidth# / 2 + #ButtonSize# * 0.8), (#GameHeight# * #TileSize# - #ButtonSize# * 3), #ButtonSize#, #ButtonSize# | FillColor 255,255,255,255 | StrokeWidth 0
LeftMouseUpAction = [!UpdateMeasureGroup MoveRight]

[DOWN]
Meter = Shape
Group = Control
Shape = Rectangle (#GameWidth# * #TileSize# + #HudPanelWidth# / 2 - #ButtonSize# / 2), (#GameHeight# * #TileSize# - #buttonSize# * 1.8), #ButtonSize#, #ButtonSize# | FillColor 255,255,255,255 | StrokeWidth 0
LeftMouseUpAction = [!UpdateMeasureGroup MoveDown]




















