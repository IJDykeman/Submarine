package;

import flash.Lib;
import flash.display.Bitmap;
import openfl.Assets;
import flash.events.Event;
import flash.geom.Rectangle;
import motion.Actuate;
import motion.easing.Quad;


class UILever extends UIElement{
	private var handle:Bitmap;
	public var settingNormal:Float=0;//0 to 1 range

	public override function onClick(mouseX:Int,mouseY:Int) : UIAction{
		



		var limits1:Rectangle = bitmap.getBounds(bitmap.parent);
		if(super.pointIsInRect(mouseX,mouseY,limits1)){

			settingNormal = ((bitmap.y+bitmap.height)-mouseY)/height;
			Actuate.tween (handle, .2, { x: handle.x, y: mouseY-handle.height/2 }, false).ease(Quad.easeOut);
		}
		return new NoUIAction();
	}

	public override function onResize(nWidth:Int,nHeight:Int){
		handle.y=Lib.current.stage.stageHeight-handle.height;
		bitmap.y= Lib.current.stage.stageHeight-bitmap.height;
		trace("in onResize");
	}

}