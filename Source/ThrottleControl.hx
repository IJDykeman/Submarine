package;

import flash.Lib;
import flash.display.Bitmap;
import openfl.Assets;
import flash.events.Event;
import flash.geom.Rectangle;
import motion.Actuate;
import motion.easing.Quad;

class ThrottleControl extends UIElement{

	private var handle:Bitmap;

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
		



		var limits1:Rectangle = bitmap.getBounds(bitmap.parent);
		if(super.pointIsInRect(mouseX,mouseY,limits1)){
			var result : UIAction;
			var nPower:Float = (cast(Lib.current.stage.stageHeight-height/2.0-mouseY,Float) - y)/(height/2.0);
			Actuate.tween (handle, .2, { x: handle.x, y: mouseY-handle.height/2 }, false).ease(Quad.easeOut);
			trace("throttle to "+nPower);
			result = new SetEnginePowerUIAction(nPower);
			trace("rect y "+limits1.y);

			return result;
		}

		return new NoUIAction();

	}

	public override function onResize(nWidth:Int,nHeight:Int){
		handle.y=Lib.current.stage.stageHeight-handle.height;
		bitmap.y= Lib.current.stage.stageHeight-bitmap.height;
	}



}