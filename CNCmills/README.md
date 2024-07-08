*Horizontal Roughing*

![HorizontalRoughing](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/6000b008-560a-48e8-b45c-30efb16f646f)


*Parallel Finishing*

![finishing](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/bf7488ff-10f1-41aa-8227-b37dea3a6f70)

## Booking

[book appointments here](https://outlook.office365.com/owa/calendar/booking-TechnoCNCCut@nyinstituteoftechnology.onmicrosoft.com/bookings/)

## Intro 

Computer Numerical Control (CNC) Machining is a manufacturing process in which pre-programmed computer software dictates the movement of factory tools and machinery. The process can be used to control a range of complex machinery, from grinders and lathes to mills and routers. 

CNC Machines and 3D printers read Geometric Code (G-code) in order to perform operations. The instructions provided by G-codes tell the machine tool how to move in the (X, Y, Z) cartesian coordinate system.  

3D printing is a process of additive manufacturing, where material is being built up in layers to form the object. 

CNC Machining is process subtractive manufacturing, where a tool carves into a stock material to leave behind the desired object. 

G-code is written in Computer Aided Manufacturing (CAM) software. In our case, this software is RhinoCAM and is a plug-in to Rhino. 

## PART 1: PRE-FABRICATION (finalization of design decisions for manufacturing) 

Stock material 

If you are considering CNC machining as your fabrication method, the next immediate consideration should be which type of stock material will be best suited for your object. Some materials that machine great are 

   Wood 

       Hardwood (NOT dimensional lumber, 2x4s, 4x4s, etc) 

       Plywood (this comes in various grades)  

   Plastics 

       Acrylic 

       Polycarbonate 

       Many types of plastics that cannot be cut on the laser cutter can be cut on the CNC 

   Foam 

       Extruded polystyrene (aka purple or pink foam, often used as insulation panels) 

       HDU (High Density Urethane). Comes in 3 different densities 

           Low density – pink/salmon 

           Med density – beige 

           High density – pale green 

   For all other materials, check with the fablab first!!! 

On material thickness: Remember, CNC machining is a subtractive fabrication method. You can think of your model as being submerged within your stock, and the game is to design toolpaths via RhinoCAM in order to excavate it. Figure out the maximum height of your model to determine how thick your material should be. 

   You may need to glue up layers of material to achieve the desired stock material thickness. 

   The type of glue and clamping method you should use depends on your material size and type. Work with the fablab to hone in on the best approach, but remember, the quality of the glue-up highly impacts the quality of the final output and ultimately falls within your responsibility 

   GLUE MUST BE DRY BEFORE THE STOCK GOES ON THE MILL  

       If done properly, at least 24 hours before cutting should be an adequate amount of time for glue to dry 

On finish quality: How important is the finish quality? Is it final? Is it a study? Do you plan to sand/paint/seal the part in some way? Is it a mold for casting or forming? Wood sands and seals great, but nice wood can be expensive. HDU foam paints and renders details at a very high quality, at a range of costs. Purple foam is cheap and readily available, but will dissolve if you spray paint it. Start (early!) to think about how these questions/decisions will impact your machining approach. 

File Setup... You will need... 

Rhino 7 file 

Contains only the geometry that you wish to cut on the CNC, modeled at full scale, "full scale" here meaning the actual size you want the object to be when it comes off the mill. 

150 KB maximum file size. Smaller file sizes will be much easier to manage in RhinoCAM. RhinoCAM has to do a lot of processing to generate and regenerate toolpaths, so smaller files will be easier to maneuver, make toolpath changes to/iterate upon, etc.  

Other things to keep in mind 

A note on scale... When you scale your model down, some details might be too small for our machine to render. Do you want to delete this information or exaggerate it so it is legible in the model? Look at a ruler to get a sense of what the newly-scaled geometry will actually look like as a physical object. Then you as the designer will have to make the call and therefore design your model-for-CNC accordingly. FabLab can make build recommendations to you, but it is up to you to use that information to make design decisions about your project. 

Double check the machine max bounding box and max tool lengths before you determine the type and total thickness of your material. If you have to split the model into parts, how will you fasten them together after they are machined?  

##  PART 2: FILE SETUP / CAM 

Intro – Notes on approach, or "Roughing" and "Finishing" 

   Roughing, generally, refers to the removal of larger quantities of material more efficiently than what one could do with finer, more detail-oriented tools. These operations get closer to the final geometry but are not yet exact. They are then paired with a finishing operation. 

   Finishing refers to the final, more delicate or detailed toolpaths/operations. 

   Some common operations and their uses 

 2 ½ D 

     Profile – Outside tangent edge of bit cuts on the inside or outside of a closed curve, to the desired cut depth. 

     Pocket – Bit carves out the area inside a closed curve, to the desired cut depth 

     Drill – Bit makes a hole at a point or the center point of a circle, to the desired cut depth. 

     Engrave – Center of bit follows the Rhino-drawn line geometry in 3D space 

 3D 

     There are different types of roughing and finishing operations, but typically the most useful two in RhinoCAM are called... 

     Horizontal Roughing – Generates a series of stepped pockets that carve out the negative space around the modeled 3D geometry 

     Parallel Finishing – Generates parallel contours across the modeled 3D geometry in one direction, with tool stepover percentage defined to achieve desired finish quality 

Some common tool types and their uses (each available in a range of lengths and diameters) 

  Endmill 

      Up Cut (UC) -- leaves a nice finish on the bottom edge of the material 

      Down Cut (DC) -- leaves a nice finish on the top edge of the material 

      Compression – leaves a nice finish on both the top and bottom edges of the material 

  Ballmill – typically used in 3D surface finishing passes 

  Drill – used for hole-making ONLY (cannot move laterally in material) 

  V-Bit – Used for carving/engrave detailing 

## PART 3: MACHINING 

Mandatory Online Shop Orientation must be completed before students are able to cut on either CNC machine 

### Techno CNC – vacuum bed hold-down 

   Max Stock Dimensions: 48" x 48" x 4" 

   Post: WinCNC 

   Standard Toolset: 

       ¼" ballmill 

       ¼" compression endmill 

       3/8" DC endmill 

       ¼" O flute (single flute) endmill 

       ½" UC endmill 

       ½" straight flute endmill 

       3/8" UC long endmill (3.5" flute length) 

### Carvey – mechanical fastener/clamp hold-down 

  Max Stock Dimensions: 12" x 8" x 2" 

  Post: X-Carve GRBL 

  Standard Toolset: 

      1/8" ballmill 

      3/16" UC endmill 

      1/8" UC endmill 

      1/16" drill 

 
[BOOK an Appointment](https://outlook.office365.com/owa/calendar/booking-TechnoCNCCut@nyinstituteoftechnology.onmicrosoft.com/bookings/)

*Want to know more?*
Check out this Detailed User Guide:

[CNCmills User Guide](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/blob/main/UserGuides/CNCmills.md)
