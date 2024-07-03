# Models Must Be:

You have found our *BASIC* guide on Modeling for 3D printing.

If you have a 3D model you made for your design studio, it is very unlikely that it is ready to print.

## How to Check Object Properties

Select the Single Mesh / Polysurface you are hoping to 3D print and view the object properties:

![ObjectProperties](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/6a6f9cf3-7190-4b0e-bf9b-b2689a4086c4)

Use The Command "ShowEdges" and Click Through the available types of edges:

![ShowEdges](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/7af0be0b-a7f5-47c3-8c59-c943d110b40e)

## Evaluate it with the below standards ( WITH GRAPHIC EXAMPLES):

Geometry must be:

* Closed polysurface / mesh

  Open:
![Correct](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/f3c50242-030e-48c8-a0a6-654509f6b42d)
  Closed:
![Correct](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/f3c50242-030e-48c8-a0a6-654509f6b42d)
* Not non-manifold
![NonManifold](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/2a8d3fac-2b81-4e00-b72a-0079ffda46ae)
* All components Larger than 1 mm (1/16 in)
![TooSmall](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/16acdeb4-1bf1-43d2-b921-41db681b1861)
* Complex geometry that cannot be easily built using alternative material / method
![TooSimple](https://github.com/DigitalFabricationLab-NYIT-SoAD/resources/assets/148252301/077a43ad-8edf-4b11-ab8f-73d43c72b1af)
* Nested into a single printer build volume: 310 x 220 x 280 mm (12 x 9 x 11 in)

      *See Example File*

[Next Step: Checking your file in Cura](/Tutorials&Templates/3Dprinters/CuraSlicer/README.md)
