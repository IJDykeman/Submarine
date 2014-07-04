package;

import flash.Lib;
import flash.display.Bitmap;
import openfl.Assets;
import flash.events.Event;
import flash.geom.Rectangle;
import motion.Actuate;
import motion.easing.Quad;

class ThrottleControl extends UILever{



	public function new(){
		super();
		bitmap = new Bitmap (Assets.getBitmapData ("assets/throttleControlBackground.png"));
		bitmap.width = 100;
		bitmap.height = bitmap.width*1.61803398875;
		addChild(bitmap);
		bitmap.y= Lib.current.stage.stageHeight-bitmap.height;
		bitmap.x=45;

		handle = new Bitmap (Assets.getBitmapData ("assets/throttleHandle.png"));
		handle.width = 160;
		handle.height = 40;
		handle.x = bitmap.x+bitmap.width/2-handle.width/2;
		handle.y=Lib.current.stage.stageHeight-handle.height;
		addChild(handle);
		var limits1:Rectangle = bitmap.getBounds(bitmap.parent);
		

	}


	public override function onClick(mouseX:Int,mouseY:Int) : UIAction{
		super.onClick(mouseX,mouseY);
		var nPower:Float = settingNormal*2-1;
		return new SetEnginePowerUIAction(nPower);
	}




}