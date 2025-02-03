# CNC User Guide

INTENDED USE: Complex 2D and 3D geometry 

SOFTWARE NEEDED: Rhino, RhinoCAM, WinCNC 

KINDS OF FILES ACCEPTED: Rhino7  

UNITS OF SUBMITTED FILES: inches 

TYPICAL ACTUAL RUN TIME ON MACHINE: 1 – 3 hours 





## Intro  

* Computer Numerical Control (CNC) Machining is a manufacturing process in which pre-programmed computer software dictates the movement of factory tools and machinery. The process can be used to control a range of complex machinery, from grinders and lathes to mills and routers.  

* CNC Machines and 3D printers read Geometric Code (G-code) in order to perform operations. The instructions provided by G-codes tell the machine tool how to move in the (X, Y, Z) cartesian coordinate system.   

* G-code is written in Computer Aided Manufacturing (CAM) software. In our case, this software is RhinoCAM and is a plug-in to Rhino. 

* CNC Machining is process of subtractive manufacturing, where a tool carves into a stock material to leave behind the desired object.  


## PART 1: PRE-FABRICATION (finalization of design decisions for manufacturing)  

### Choose what type of stock material you want your object to be made of

Some materials that machine great are: 

* Wood  
  
* Hardwood (NOT dimensional lumber, 2x4s, 4x4s, etc)  
  
* Plywood (this comes in various grades)   
  
* Plastics  
  
* Acrylic  
  
* Polycarbonate  
  
* Foam  
  
* Extruded polystyrene (aka purple or pink foam, often used as insulation panels)  
  
* HDU (High Density Urethane). Comes in 3 different densities  
  
* Low density – pink/salmon  
  
* Med density – beige  
  
* High density – pale green  
  
* For all other materials, check with the fablab first!!!  
  
### You may need to glue up layers of material to achieve the desired stock material thickness.

The type of glue and clamping method you should use depends on your material size and type. Work with the fablab to hone in on the best approach, but remember, the quality of the glue-up highly impacts the quality of the final output and ultimately falls within your responsibility  

GLUE MUST BE DRY BEFORE THE STOCK GOES ON THE MILL. Typically, at least 24 hours are needed.

### File Setup... You will need...

* Rhino 7 file  

* Contains only the geometry that you wish to cut on the CNC, modeled at full scale, "full scale" here meaning the actual size you want the object to be when it comes off the mill.  

* 10,000 KB maximum file size, purged, save small, save geometry only. Smaller file sizes will be much easier to manage in RhinoCAM. RhinoCAM has to do a lot of processing to generate and regenerate toolpaths, so smaller files will be easier to maneuver, make toolpath changes to/iterate upon, etc.   

## PART 2: FILE SETUP / CAM  

Carving complex 3D geometry  

Roughing, generally, refers to the removal of larger quantities of material more efficiently than what one could do with finer, more detail-oriented tools. These operations get closer to the final geometry but are not yet exact. They are then paired with a finishing operation.  

Finishing refers to the final, more delicate or detailed toolpaths/operations. 

### Some common operations and their uses  

**2 ½ D** 
  
* Profile – Outside tangent edge of bit cuts on the inside or outside of a closed curve, to the desired cut depth.  
  
* Pocket – Bit carves out the area inside a closed curve, to the desired cut depth  
  
* Drill – Bit makes a hole at a point or the center point of a circle, to the desired cut depth.  
  
* Engrave – Center of bit follows the Rhino-drawn line geometry in 3D space  

**3D**   

* Horizontal Roughing – Generates a series of stepped pockets that carve out the negative space around the modeled 3D geometry 

![HorizontalRoughing](https://github.com/user-attachments/assets/be660e56-f7ac-4ad9-8f52-5234ecd17e17)


* Parallel Finishing – Generates parallel contours across the modeled 3D geometry in one direction, with tool stepover percentage defined to achieve desired finish quality  

![finishing](https://github.com/user-attachments/assets/5d14bd53-4790-4f56-a5e1-8c01389dd93e)

### Some common tool types and their uses (each available in a range of lengths and diameters)  

* Endmill 

  * Up Cut (UC) -- leaves a nice finish on the bottom edge of the material 
  
  * Down Cut (DC) -- leaves a nice finish on the top edge of the material 
  
* Compression – leaves a nice finish on both the top and bottom edges of the material  
  
* Ballmill – typically used in 3D surface finishing passes
  
* Drill – used for hole-making ONLY (cannot move laterally in material)  
  
* V-Bit – Used for carving/engrave detailing 
  
*Use these custom combinations of these tools and operations to achieve desired geometry/finish quality*

## PART 3: MACHINING  

**Techno CNC – vacuum bed hold-down**
  
* Max Stock Dimensions: 48" x 48" x 4"  
  
* Post: WinCNC  
  
* Standard Toolset:  
  
  * ¼" ballmill  
  
  * ¼" compression endmill  
  
  * 3/8" DC endmill  
  
  * ¼" O flute (single flute) endmill  
  
  * ½" UC endmill  
  
  * ½" straight flute endmill  
  
  * 3/8" UC long endmill (3.5" flute length)  
