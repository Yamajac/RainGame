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
[Variables]
CurrentScreen  =ExampleScreen
GameWidth      = 15
GameHeight     = 20
TileSize       = 16
HudPanelColour = 40,40,40,255 
HudPanelWidth  = 130
ButtonSize     = 20
PlayerX        =4
PlayerY        =5


; This is where you drawn your game's HUD and controls.
; Use the various groups to have things hidden/shown at certain times.


; Drawing the Hud/Control panel background
[HudPanelBG]
Meter = Shape
Shape = Rectangle (#GameWidth# * #TileSize#), 0, #HudPanelWidth#, (#GameHeight# * #TileSize#) | FillColor #HudPanelColour# | StrokeWidth 0

; Drawing the Hud/Control panel title
[HudPanelTitle]
Meter = String
Text = Hud Panel
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
Shape = Rectangle (#GameWidth# * #TileSize# + #HudPanelWidth# / 2 - #ButtonSize# / 2), (#GameHeight# * #TileSize# - #ButtonSize# * 4.2), #ButtonSize#, #ButtonSize# | FillColor 255,255,255,255 | StrokeWidth 0
LeftMouseUpAction = [!UpdateMeasureGroup MoveUp]

[LEFT]
Meter = Shape
Shape = Rectangle (#GameWidth# * #TileSize# + #HudPanelWidth# / 2 - #ButtonSize# * 1.8), (#GameHeight# * #TileSize# - #ButtonSize# * 3), #ButtonSize#, #ButtonSize# | FillColor 255,255,255,255 | StrokeWidth 0
LeftMouseUpAction = [!UpdateMeasureGroup MoveLeft]

[RIGHT]
Meter = Shape
Shape = Rectangle (#GameWidth# * #TileSize# + #HudPanelWidth# / 2 + #ButtonSize# * 0.8), (#GameHeight# * #TileSize# - #ButtonSize# * 3), #ButtonSize#, #ButtonSize# | FillColor 255,255,255,255 | StrokeWidth 0
LeftMouseUpAction = [!UpdateMeasureGroup MoveRight]

[DOWN]
Meter = Shape
Shape = Rectangle (#GameWidth# * #TileSize# + #HudPanelWidth# / 2 - #ButtonSize# / 2), (#GameHeight# * #TileSize# - #buttonSize# * 1.8), #ButtonSize#, #ButtonSize# | FillColor 255,255,255,255 | StrokeWidth 0
LeftMouseUpAction = [!UpdateMeasureGroup MoveDown]



















