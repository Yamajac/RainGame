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
CurrentScreen  =Puzzle2
PlayerSprite   = Hero
GameWidth      = 15
GameHeight     = 20
TileSize       = 16
HudPanelColour = 40,40,40,255 
HudPanelWidth  = 130
ButtonSize     = 20
PlayerX        =7
PlayerY        =19

; Basic Collision Tile
Tile0 =
; Stone
Tile1 = 0
; Portals
Tile2 = 2
Tile3 = 2

Sound1 = stepstone_3




[HudPanelBG]
Meter = Shape
Group = Control
Shape = Rectangle (#GameWidth# * #TileSize#), 0, #HudPanelWidth#, (#GameHeight# * #TileSize#) | FillColor #HudPanelColour# | StrokeWidth 0
[HudPanelTitle]
Meter = String
Group = Control
Text  = Hud Panel
FontSize = 15
X = (#GameWidth# * #TileSize# + #HudPanelWidth#/10)
Y = 5
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




















