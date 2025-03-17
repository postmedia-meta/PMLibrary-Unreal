# PMLibrary Unreal Plugin
Useful C++/Blueprints Library for Unreal Engine 5

Supproted version 5.5

##Setting
1. Place the plugin you want to use in the Plugins folder (if it does not exist Plugins folder, create Plugins folder) inside the Unreal project folder.
   
2-1. When using in Blueprint, run the project and check the plugin.
![Image](https://github.com/user-attachments/assets/ea65bbb5-eb7e-4e41-9e95-b37d76b6b159)

2-2. When used in C++ code, add the plug-in name to DependencyModuleNames in the project's build.cs, and then build and run the project.
![Image](https://github.com/user-attachments/assets/5ac708fc-8e83-4afe-9dba-3a8c929761f2)

##How to use
###[MetaPlayer]
1. MultiMediaSyncPlayer
  - Insert desired video into the file media source.
  - Check if the video loops
![Image](https://github.com/user-attachments/assets/af7437e7-d512-4d9c-9810-1a761b31855d)

  - After you prepare the video, you can play it whenever you want or play it immediately. (Caution: There will be a delay if you play it right away without any preparation.)

 2. Display
 2-1. UI
  - Create a blueprint that inherits DisplayWidget.
  - Place a panel widget that inherits the UPanelWidget(ex. GridPanel, HorizontalBox...) and rename to DisplayPanel.
  - Create as many images as the number of file media sources entered in MultiMediaSyncPlayer as children of the DisplayPanel.
![Image](https://github.com/user-attachments/assets/d031b4ab-abd4-4b6d-8883-80070164f427)

  - Create widget and add to viewport.
  - Outputting video using the SetMediaTexturesDisplayMaterials function. (Note: MultiMediaSyncPlayer must be ready or playing)
     
 2-2. 3D Actor
   - Placing a DisplayActor into the world.
   - Create a plane component as a child of ArrowComponent equal to the number of file media sources entered in MultiMediaSyncPlayer.
![Image](https://github.com/user-attachments/assets/9f4f9d69-a325-4c1d-a870-603214e29bfd)

   -  Set each plane to the desired position and size.
