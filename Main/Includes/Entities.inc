[EntityStyle]
Group     = EntityUpdate | PlayerUpdate | EntityDrawing
Container = GameArea
DynamicVariables = 1




[GetEntity1]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,0}.*?N(.*?)(\||$).*":"\3" 
[Entity1]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity1]Image].png
X          = ([Background:X] + ([#[&GetEntity1]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity1]Y] * (#TileSize# * #Scale#)))
[Entity1Scaler]
measure = calc
Formula = [Entity1:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity1 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity2]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,1}.*?N(.*?)(\||$).*":"\3" 
[Entity2]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity2]Image].png
X          = ([Background:X] + ([#[&GetEntity2]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity2]Y] * (#TileSize# * #Scale#)))
[Entity2Scaler]
measure = calc
Formula = [Entity2:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity2 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity3]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,2}.*?N(.*?)(\||$).*":"\3" 
[Entity3]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity3]Image].png
X          = ([Background:X] + ([#[&GetEntity3]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity3]Y] * (#TileSize# * #Scale#)))
[Entity3Scaler]
measure = calc
Formula = [Entity3:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity3 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity4]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,3}.*?N(.*?)(\||$).*":"\3" 
[Entity4]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity4]Image].png
X          = ([Background:X] + ([#[&GetEntity4]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity4]Y] * (#TileSize# * #Scale#)))
[Entity4Scaler]
measure = calc
Formula = [Entity4:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity4 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity5]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,4}.*?N(.*?)(\||$).*":"\3" 
[Entity5]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity5]Image].png
X          = ([Background:X] + ([#[&GetEntity5]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity5]Y] * (#TileSize# * #Scale#)))
[Entity5Scaler]
measure = calc
Formula = [Entity5:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity5 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity6]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,5}.*?N(.*?)(\||$).*":"\3" 
[Entity6]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity6]Image].png
X          = ([Background:X] + ([#[&GetEntity6]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity6]Y] * (#TileSize# * #Scale#)))
[Entity6Scaler]
measure = calc
Formula = [Entity6:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity6 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity7]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,6}.*?N(.*?)(\||$).*":"\3" 
[Entity7]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity7]Image].png
X          = ([Background:X] + ([#[&GetEntity7]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity7]Y] * (#TileSize# * #Scale#)))
[Entity7Scaler]
measure = calc
Formula = [Entity7:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity7 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity8]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,7}.*?N(.*?)(\||$).*":"\3" 
[Entity8]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity8]Image].png
X          = ([Background:X] + ([#[&GetEntity8]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity8]Y] * (#TileSize# * #Scale#)))
[Entity8Scaler]
measure = calc
Formula = [Entity8:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity8 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity9]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,8}.*?N(.*?)(\||$).*":"\3" 
[Entity9]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity9]Image].png
X          = ([Background:X] + ([#[&GetEntity9]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity9]Y] * (#TileSize# * #Scale#)))
[Entity9Scaler]
measure = calc
Formula = [Entity9:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity9 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity10]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,9}.*?N(.*?)(\||$).*":"\3" 
[Entity10]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity10]Image].png
X          = ([Background:X] + ([#[&GetEntity10]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity10]Y] * (#TileSize# * #Scale#)))
[Entity10Scaler]
measure = calc
Formula = [Entity10:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity10 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity11]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,10}.*?N(.*?)(\||$).*":"\3" 
[Entity11]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity11]Image].png
X          = ([Background:X] + ([#[&GetEntity11]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity11]Y] * (#TileSize# * #Scale#)))
[Entity11Scaler]
measure = calc
Formula = [Entity11:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity11 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity12]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,11}.*?N(.*?)(\||$).*":"\3" 
[Entity12]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity12]Image].png
X          = ([Background:X] + ([#[&GetEntity12]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity12]Y] * (#TileSize# * #Scale#)))
[Entity12Scaler]
measure = calc
Formula = [Entity12:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity12 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity13]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,12}.*?N(.*?)(\||$).*":"\3" 
[Entity13]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity13]Image].png
X          = ([Background:X] + ([#[&GetEntity13]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity13]Y] * (#TileSize# * #Scale#)))
[Entity13Scaler]
measure = calc
Formula = [Entity13:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity13 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity14]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,13}.*?N(.*?)(\||$).*":"\3" 
[Entity14]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity14]Image].png
X          = ([Background:X] + ([#[&GetEntity14]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity14]Y] * (#TileSize# * #Scale#)))
[Entity14Scaler]
measure = calc
Formula = [Entity14:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity14 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity15]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,14}.*?N(.*?)(\||$).*":"\3" 
[Entity15]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity15]Image].png
X          = ([Background:X] + ([#[&GetEntity15]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity15]Y] * (#TileSize# * #Scale#)))
[Entity15Scaler]
measure = calc
Formula = [Entity15:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity15 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity16]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,15}.*?N(.*?)(\||$).*":"\3" 
[Entity16]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity16]Image].png
X          = ([Background:X] + ([#[&GetEntity16]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity16]Y] * (#TileSize# * #Scale#)))
[Entity16Scaler]
measure = calc
Formula = [Entity16:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity16 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity17]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,16}.*?N(.*?)(\||$).*":"\3" 
[Entity17]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity17]Image].png
X          = ([Background:X] + ([#[&GetEntity17]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity17]Y] * (#TileSize# * #Scale#)))
[Entity17Scaler]
measure = calc
Formula = [Entity17:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity17 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity18]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,17}.*?N(.*?)(\||$).*":"\3" 
[Entity18]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity18]Image].png
X          = ([Background:X] + ([#[&GetEntity18]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity18]Y] * (#TileSize# * #Scale#)))
[Entity18Scaler]
measure = calc
Formula = [Entity18:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity18 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity19]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,18}.*?N(.*?)(\||$).*":"\3" 
[Entity19]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity19]Image].png
X          = ([Background:X] + ([#[&GetEntity19]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity19]Y] * (#TileSize# * #Scale#)))
[Entity19Scaler]
measure = calc
Formula = [Entity19:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity19 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity20]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,19}.*?N(.*?)(\||$).*":"\3" 
[Entity20]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity20]Image].png
X          = ([Background:X] + ([#[&GetEntity20]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity20]Y] * (#TileSize# * #Scale#)))
[Entity20Scaler]
measure = calc
Formula = [Entity20:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity20 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity21]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,20}.*?N(.*?)(\||$).*":"\3" 
[Entity21]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity21]Image].png
X          = ([Background:X] + ([#[&GetEntity21]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity21]Y] * (#TileSize# * #Scale#)))
[Entity21Scaler]
measure = calc
Formula = [Entity21:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity21 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity22]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,21}.*?N(.*?)(\||$).*":"\3" 
[Entity22]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity22]Image].png
X          = ([Background:X] + ([#[&GetEntity22]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity22]Y] * (#TileSize# * #Scale#)))
[Entity22Scaler]
measure = calc
Formula = [Entity22:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity22 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity23]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,22}.*?N(.*?)(\||$).*":"\3" 
[Entity23]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity23]Image].png
X          = ([Background:X] + ([#[&GetEntity23]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity23]Y] * (#TileSize# * #Scale#)))
[Entity23Scaler]
measure = calc
Formula = [Entity23:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity23 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity24]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,23}.*?N(.*?)(\||$).*":"\3" 
[Entity24]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity24]Image].png
X          = ([Background:X] + ([#[&GetEntity24]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity24]Y] * (#TileSize# * #Scale#)))
[Entity24Scaler]
measure = calc
Formula = [Entity24:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity24 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity25]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,24}.*?N(.*?)(\||$).*":"\3" 
[Entity25]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity25]Image].png
X          = ([Background:X] + ([#[&GetEntity25]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity25]Y] * (#TileSize# * #Scale#)))
[Entity25Scaler]
measure = calc
Formula = [Entity25:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity25 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity26]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,25}.*?N(.*?)(\||$).*":"\3" 
[Entity26]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity26]Image].png
X          = ([Background:X] + ([#[&GetEntity26]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity26]Y] * (#TileSize# * #Scale#)))
[Entity26Scaler]
measure = calc
Formula = [Entity26:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity26 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity27]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,26}.*?N(.*?)(\||$).*":"\3" 
[Entity27]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity27]Image].png
X          = ([Background:X] + ([#[&GetEntity27]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity27]Y] * (#TileSize# * #Scale#)))
[Entity27Scaler]
measure = calc
Formula = [Entity27:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity27 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity28]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,27}.*?N(.*?)(\||$).*":"\3" 
[Entity28]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity28]Image].png
X          = ([Background:X] + ([#[&GetEntity28]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity28]Y] * (#TileSize# * #Scale#)))
[Entity28Scaler]
measure = calc
Formula = [Entity28:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity28 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity29]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,28}.*?N(.*?)(\||$).*":"\3" 
[Entity29]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity29]Image].png
X          = ([Background:X] + ([#[&GetEntity29]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity29]Y] * (#TileSize# * #Scale#)))
[Entity29Scaler]
measure = calc
Formula = [Entity29:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity29 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity30]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,29}.*?N(.*?)(\||$).*":"\3" 
[Entity30]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity30]Image].png
X          = ([Background:X] + ([#[&GetEntity30]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity30]Y] * (#TileSize# * #Scale#)))
[Entity30Scaler]
measure = calc
Formula = [Entity30:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity30 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity31]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,30}.*?N(.*?)(\||$).*":"\3" 
[Entity31]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity31]Image].png
X          = ([Background:X] + ([#[&GetEntity31]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity31]Y] * (#TileSize# * #Scale#)))
[Entity31Scaler]
measure = calc
Formula = [Entity31:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity31 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity32]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,31}.*?N(.*?)(\||$).*":"\3" 
[Entity32]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity32]Image].png
X          = ([Background:X] + ([#[&GetEntity32]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity32]Y] * (#TileSize# * #Scale#)))
[Entity32Scaler]
measure = calc
Formula = [Entity32:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity32 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity33]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,32}.*?N(.*?)(\||$).*":"\3" 
[Entity33]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity33]Image].png
X          = ([Background:X] + ([#[&GetEntity33]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity33]Y] * (#TileSize# * #Scale#)))
[Entity33Scaler]
measure = calc
Formula = [Entity33:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity33 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity34]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,33}.*?N(.*?)(\||$).*":"\3" 
[Entity34]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity34]Image].png
X          = ([Background:X] + ([#[&GetEntity34]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity34]Y] * (#TileSize# * #Scale#)))
[Entity34Scaler]
measure = calc
Formula = [Entity34:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity34 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity35]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,34}.*?N(.*?)(\||$).*":"\3" 
[Entity35]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity35]Image].png
X          = ([Background:X] + ([#[&GetEntity35]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity35]Y] * (#TileSize# * #Scale#)))
[Entity35Scaler]
measure = calc
Formula = [Entity35:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity35 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity36]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,35}.*?N(.*?)(\||$).*":"\3" 
[Entity36]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity36]Image].png
X          = ([Background:X] + ([#[&GetEntity36]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity36]Y] * (#TileSize# * #Scale#)))
[Entity36Scaler]
measure = calc
Formula = [Entity36:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity36 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity37]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,36}.*?N(.*?)(\||$).*":"\3" 
[Entity37]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity37]Image].png
X          = ([Background:X] + ([#[&GetEntity37]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity37]Y] * (#TileSize# * #Scale#)))
[Entity37Scaler]
measure = calc
Formula = [Entity37:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity37 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity38]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,37}.*?N(.*?)(\||$).*":"\3" 
[Entity38]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity38]Image].png
X          = ([Background:X] + ([#[&GetEntity38]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity38]Y] * (#TileSize# * #Scale#)))
[Entity38Scaler]
measure = calc
Formula = [Entity38:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity38 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity39]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,38}.*?N(.*?)(\||$).*":"\3" 
[Entity39]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity39]Image].png
X          = ([Background:X] + ([#[&GetEntity39]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity39]Y] * (#TileSize# * #Scale#)))
[Entity39Scaler]
measure = calc
Formula = [Entity39:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity39 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity40]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,39}.*?N(.*?)(\||$).*":"\3" 
[Entity40]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity40]Image].png
X          = ([Background:X] + ([#[&GetEntity40]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity40]Y] * (#TileSize# * #Scale#)))
[Entity40Scaler]
measure = calc
Formula = [Entity40:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity40 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity41]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,40}.*?N(.*?)(\||$).*":"\3" 
[Entity41]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity41]Image].png
X          = ([Background:X] + ([#[&GetEntity41]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity41]Y] * (#TileSize# * #Scale#)))
[Entity41Scaler]
measure = calc
Formula = [Entity41:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity41 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity42]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,41}.*?N(.*?)(\||$).*":"\3" 
[Entity42]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity42]Image].png
X          = ([Background:X] + ([#[&GetEntity42]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity42]Y] * (#TileSize# * #Scale#)))
[Entity42Scaler]
measure = calc
Formula = [Entity42:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity42 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity43]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,42}.*?N(.*?)(\||$).*":"\3" 
[Entity43]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity43]Image].png
X          = ([Background:X] + ([#[&GetEntity43]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity43]Y] * (#TileSize# * #Scale#)))
[Entity43Scaler]
measure = calc
Formula = [Entity43:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity43 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity44]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,43}.*?N(.*?)(\||$).*":"\3" 
[Entity44]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity44]Image].png
X          = ([Background:X] + ([#[&GetEntity44]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity44]Y] * (#TileSize# * #Scale#)))
[Entity44Scaler]
measure = calc
Formula = [Entity44:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity44 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity45]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,44}.*?N(.*?)(\||$).*":"\3" 
[Entity45]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity45]Image].png
X          = ([Background:X] + ([#[&GetEntity45]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity45]Y] * (#TileSize# * #Scale#)))
[Entity45Scaler]
measure = calc
Formula = [Entity45:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity45 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity46]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,45}.*?N(.*?)(\||$).*":"\3" 
[Entity46]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity46]Image].png
X          = ([Background:X] + ([#[&GetEntity46]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity46]Y] * (#TileSize# * #Scale#)))
[Entity46Scaler]
measure = calc
Formula = [Entity46:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity46 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity47]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,46}.*?N(.*?)(\||$).*":"\3" 
[Entity47]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity47]Image].png
X          = ([Background:X] + ([#[&GetEntity47]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity47]Y] * (#TileSize# * #Scale#)))
[Entity47Scaler]
measure = calc
Formula = [Entity47:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity47 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity48]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,47}.*?N(.*?)(\||$).*":"\3" 
[Entity48]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity48]Image].png
X          = ([Background:X] + ([#[&GetEntity48]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity48]Y] * (#TileSize# * #Scale#)))
[Entity48Scaler]
measure = calc
Formula = [Entity48:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity48 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity49]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,48}.*?N(.*?)(\||$).*":"\3" 
[Entity49]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity49]Image].png
X          = ([Background:X] + ([#[&GetEntity49]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity49]Y] * (#TileSize# * #Scale#)))
[Entity49Scaler]
measure = calc
Formula = [Entity49:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity49 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]

[GetEntity50]
Measure = String
String  = [Entities]
Group   = EntityUpdate
DynamicVariables = 1
RegExpSubstitute = 1
Substitute       = "((.*?)\|){0,49}.*?N(.*?)(\||$).*":"\3" 
[Entity50]
Meter      = Image
MeterStyle = EntityStyle
ImageName  = #@#Games/#Game#/Resources/Sprites/[#[&GetEntity50]Image].png
X          = ([Background:X] + ([#[&GetEntity50]X] * (#TileSize# * #Scale#)))
Y          = ([Background:Y] + ([#[&GetEntity50]Y] * (#TileSize# * #Scale#)))
[Entity50Scaler]
measure = calc
Formula = [Entity50:W]*#Scale#
DynamicVariables = 1
OnUpdateAction = [!SetOption Entity50 W [#CURRENTSECTION#]][!DisableMeasure #CURRENTSECTION#]
