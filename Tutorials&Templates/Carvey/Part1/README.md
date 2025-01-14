# PART 1: How to Set Up a CNC File Using Rhino FreeMILL  

To begin this setup process, you should already have RhinoCAM installed on your computer. 

## 1. Open Rhino File, Run FreeMILL, Set Cutting Direction 

Select "Run FreeMILL." 

If the window pictured below doesn't appear, type "pluginmanager" into the Rhino command bar and scroll down to check the RhinoCAM plugin. Make sure it is selected, then restart Rhino.

![1_run_freemill](https://github.com/user-attachments/assets/e0856021-7395-4c07-ac6b-b158c71a47ad) 

The model you are going to cut should be the only thing in your Rhino file. Make sure the lowest left corner is located at the origin of your modeling space, and that the object is sized appropriately to fit within the Carvey bounding box (12" x 8") and within your stock thickness (max 1"). 

Verify that the red, green, and blue origin indicator appears in your model space as shown below: 

![2_cut_direction](https://github.com/user-attachments/assets/4b13a1d8-2d15-409c-ab33-f361d1e38a8d)

## 2. Create Part Bounds Stock 


FreeMILL will automatically detect the bounding box of the part you would like to cut and highlight this volume in orange. Use the numbers it generates to double check that the part you want to cut will fit within the stock you are planning to use. 

![3_stock](https://github.com/user-attachments/assets/52bb65df-b26c-4a66-97b2-68c16b47151b)

## 3. Set Work Zero 

Select these options: 

* Set to Stock Box 

* Highest Z 

* Southwest 

![4_work_zero](https://github.com/user-attachments/assets/64b1914a-07f3-4c57-a1dd-1af8d1888986)

Note the additional set of coordinates arrows, located at the top of the stock. This is where you will move the tool manually on Carvey in order to set X, Y, and Z zero. 

## 4. Create Cutting Tool 

Below are the approved tools for use on our Carvey CNC router. Use this for reference when setting up your tool: 

![1_carvey_tools](https://github.com/user-attachments/assets/97e8d879-6550-49a1-b02b-fc1ae636a4c4)

For this example, we will use a 3/16" end mill 

* Start tool setup by selecting the correct profile based on the diagrams located in the upper left corner of the window. 

* The Holder Diameter will always be 0.75" and the Holder Length will always be 0.5" for this machine 

* In general, the Tool Length should be equal to or greater than your stock thickness to prevent the tool holder from crashing into your part/stock while cutting. 

3/16" End Mill*: 

![5_create_tool_T1](https://github.com/user-attachments/assets/ca596ddb-3a1b-4388-a22f-ad8ab282f352)

**For a 3/16" Ball Mill, change the profile type and use the same dimensions as above* 

1/8" Ball Mill*: 

![5_create_tool_T2](https://github.com/user-attachments/assets/26a6f7fe-19ae-4186-a2a9-18f7df726b89)

**For a 1/8" End Mill, change the profile type and use the same dimensions as above* 

## 5. Set Cutting Feeds and Speeds 

Use these settings for **3/16" end mills and ball mills**: 

![6_feeds_speeds_T1](https://github.com/user-attachments/assets/01f243ff-d2ba-4576-9b87-d6355cbbc794)

Use these settings for **1/8" end mills and ball mills**: 

![6_feeds_speeds_T2](https://github.com/user-attachments/assets/572be36c-3f9a-4dc2-b9b8-0121f6d6864d)

## 6. Create Machining Operation 

Adjusting the Step Distance and Stepdown Distance affects the quality of your model as well as how long it will take to cut. (generally, higher quality = takes longer to cut, lower quality = takes less time to cut) 

The Lab recommends setting the *Step Distance as **half** the diameter of your cutting tool* and the *Stepdown Distance as **equal** to your cutting tool.* 
 
![7_machining_operation_settings](https://github.com/user-attachments/assets/520c5820-28aa-4ce5-a26f-c7225b2b0d97)

Then click "Generate" to view the toolpaths 

![7_machining_operation_generate](https://github.com/user-attachments/assets/8ca02c29-c7e1-4cae-a99b-dfa9cf28ad86)

Click "Simulate" to view a rendering of the milled model. 

![7_machining_operation_simulate](https://github.com/user-attachments/assets/794a385e-bf34-4b10-afd7-0d06f961b320)

## 7. Post-Process Operation 

* Scroll down to select "X-Carve GRBL." 

* Click "Post" 

* Name your file and click "Save" 

![8_post](https://github.com/user-attachments/assets/fde1ae35-b2ff-471d-80d5-df75967485e2)

After you click save, an .nc file should pop up. That file is the code that Carvey will read to run your file.  

*coming soon*: Click here to jump to PART 2 of Carvey Mini CNC Operating Procedure: How to Run a Job on Carvey Using GSender  
