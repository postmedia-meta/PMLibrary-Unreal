# PMLibrary Unreal Plugin
Useful C++/Blueprints Library for Unreal Engine 5

Supproted version 5.5

## Introduction
[MetaPlayer]
MetaPlayer is a plugin based on WMF Player that plays multiple videos in sync. Since Unreal cannot play videos with a resolution exceeding about 8K, it is designed to split the video into several pieces and import them into Unreal so that the videos can be played in sync.

[MetaToolkit]
This plugin aims to create several tools that allow you to easily change various settings.

[MetaVFX]
MetaVFX is designed to provide easy access to a wide range of effects that can be used in media art.

## Setting
1. Place the plugin you want to use in the Plugins folder (if it does not exist Plugins folder, create Plugins folder) inside the Unreal project folder.
   
2-1. When using in Blueprint, run the project and check the plugin.
![Image](https://github.com/user-attachments/assets/ea65bbb5-eb7e-4e41-9e95-b37d76b6b159)

2-2. When used in C++ code, add the plug-in name to DependencyModuleNames in the project's build.cs, and then build and run the project.
![Image](https://github.com/user-attachments/assets/5ac708fc-8e83-4afe-9dba-3a8c929761f2)

# How to use
## [MetaPlayer]
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

## [MetaToolkit]
1. MTKWidget
   - The MTKWidget is a widget that inherits Usetwidget and displays the mouse cursor based on the Unreal viewport position.
   - To fit the mouse cursor position to the viewport, you can inherit MTKWidget and use it.

2. MetaGraphicsSettingsComponent
   - Add MetaGraphicsSettingsComponent to Player Controller.
![Image](https://github.com/user-attachments/assets/094ff63d-8b9b-4f42-86fd-0e5238fe271c)

   - To show it, call ShowGraphicsSettingsUI on the component, to hide it, call HideGraphicsSettingsUI.
![Image](https://github.com/user-attachments/assets/9d273e1c-899f-4270-875b-7367bb1630ce)

   - Play the game and configure the settings after displaying the UI.
![Image](https://github.com/user-attachments/assets/978c6027-e7ab-4f28-a427-b5db01b9a555)

   - You must click the 'Apply' button to save the converted settings.
