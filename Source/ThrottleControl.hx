
import flash.display.Bitmap;
import openfl.Assets;

class ThrottleControl extends UIElement{

	public function new(){
		super();
		bitmap = new Bitmap (Assets.getBitmapData ("assets/depthGuage.png"));
		bitmap.width = 50;
		bitmap.height = 50;
		addChild(bitmap);
	}


	public override function onClick(mouseX:Int,mouseY:Int) : UIAction{
		var result : UIAction;

		var nPower:Float = 1.0-(cast(mouseY,Float) - y)/height;
		trace("throttle to "+nPower);
		result = new SetEnginePowerUIAction(nPower);
		return result;
	}

}