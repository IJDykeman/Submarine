package;

import flash.Lib;
import flash.display.Bitmap;
import openfl.Assets;
import flash.events.Event;
import flash.geom.Rectangle;
import motion.Actuate;
import motion.easing.Quad;

class UIBalastTankControl extends UILever{



	public function new(){
		super();
		bitmap = new Bitmap (Assets.getBitmapData ("assets/verticlePipe.png"));
		bitmap.width = 100;
		bitmap.height = bitmap.width*1.61803398875;
		addChild(bitmap);
		bitmap.y= Lib.current.stage.stageHeight-bitmap.height;
		bitmap.x=255;

		handle = new Bitmap (Assets.getBitmapData ("assets/woodenBall.png"));
		handle.width = 160;
		handle.height = 40;
		handle.x = bitmap.x+bitmap.width/2-handle.width/2;
		handle.y=Lib.current.stage.stageHeight-handle.height;
		addChild(handle);
		var limits1:Rectangle = bitmap.getBounds(bitmap.parent);
		

	}


	public override function onClick(mouseX:Int,mouseY:Int) : UIAction{
		super.onClick(mouseX,mouseY);
		trace("balast set to "+settingNormal);
		if(Math.abs(settingNormal-.5)<.1){
			settingNormal = .5;
		}
		return new SetBalastTankLevelUIAction(settingNormal);
	}






}