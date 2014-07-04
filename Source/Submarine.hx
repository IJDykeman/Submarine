package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import openfl.Assets;


class Submarine extends UnderwaterObject {
	
	var engineSettingNormal : Float=0;
	var enginePower : Float = 1000;

	public function new () {
		super();
		volume = 1996;
		setMass(748714);

		super ();
		bitmap = new Bitmap (Assets.getBitmapData ("assets/sub.png"));
		bitmap.width =67.1*Constants.pixelsPerMeter;
		bitmap.height =6.2*Constants.pixelsPerMeter;
		bitmap.x = 0;
		bitmap.y = 0;
		this.addChild(bitmap);
		velocity = new Vector(0,0);
		velocity.x=0;
		drag = .09;
		location = new Vector(2,15);
		engineSettingNormal = 0;
		
	}

	public override function update(seconds:Float){
		super.update(seconds);

		velocity.x += engineSettingNormal*(enginePower/getMass());

		if(velocity.x<.00001){
			velocity.x=0;
		}

		location.x += velocity.x;
		location.y += velocity.y;
		trace(velocity.x);
	}

	public function setEnginePower(nPower:Float){
		engineSettingNormal = nPower;
	}
	
	
}