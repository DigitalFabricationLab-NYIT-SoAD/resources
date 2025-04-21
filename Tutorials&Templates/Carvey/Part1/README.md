# PART 1: How to Set Up a CNC File Using Rhino FreeMILL  

To begin this setup process and to access FreeMILL, students should already have RhinoCAM installed on their computer. 

*Remember, **You do NOT need to pay for a full RhinoCAM license to run FreeMILL**, but you WILL be downloading and installing the same program as the paid version.*

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

For this example, we will use a 3/16" ball mill 

* Start tool setup by selecting the correct profile (ball mill) in the upper left corner of the window. 

* Input the dimensions of the tool as follows:  

 ![3_16_ball_tool](https://github.com/user-attachments/assets/8d0c56d1-778a-46f3-aafe-3132aa4fd20c)

## 5. Set Cutting Feeds and Speeds 

Input the following settings: 

![feeds_speeds](https://github.com/user-attachments/assets/792fdd80-8856-4dd0-a576-ecc2718916c4)

## 6. Create Machining Operation 

Input the following settings: 

![step_distance](https://github.com/user-attachments/assets/532cba37-5a80-494e-9bf8-a9f6bb92f329)

Then click "Generate" to view the toolpaths. 

![7_machining_operation_generate](https://github.com/user-attachments/assets/8ca02c29-c7e1-4cae-a99b-dfa9cf28ad86)

Click "Simulate" to view a rendering of the milled model. 

![7_machining_operation_simulate](https://github.com/user-attachments/assets/794a385e-bf34-4b10-afd7-0d06f961b320)

## 7. Post-Process Operation 

* Scroll down to select "X-Carve GRBL." 

* Click "Post" 

* Name your file and click "Save" 

![8_post](https://github.com/user-attachments/assets/fde1ae35-b2ff-471d-80d5-df75967485e2)

After you click save, an .nc file should pop up. That file is the code that Carvey will read to run your file.  

[Click here to jump to PART 2: How to Run a Job on Carvey Using gSender](https://digitalfabricationlab-nyit-soad.github.io/resources/Tutorials&Templates/Carvey/Part2/)  

[back to top](https://digitalfabricationlab-nyit-soad.github.io/resources/Tutorials&Templates/Carvey/Part1/)
