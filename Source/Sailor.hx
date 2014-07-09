package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import openfl.Assets;


class Sailor extends Actor {
	
	//sub is x= -21m to x=21m
	//sub hall is 42 meters
	var walkSpeed:Float = 2.0;
	var targetXLocation:Float = 21;

	public function new () {
		super();
		
		setMass(1995406);

		super ();
		bitmap = new Bitmap (Assets.getBitmapData ("assets/standingSailor.png"));
		bitmap.width = 25;
		bitmap.height = 25;
		addChild(bitmap);
		location.x = -21;
		location.y=6.2;
		
	}

	public override function update(seconds:Float){
		super.update(seconds);
		//velocity.x += engineSettingNormal*(enginePower/getMass());

		if(velocity.x<.00001){
			velocity.x=0;
		}

		var walk : Float = targetXLocation - location.x;
		walk = Helpers.clamp(walk,-1,1);
		walk *= walkSpeed/Constants.pixelsPerMeter;
		location.x+=walk;

		location.x += velocity.x;
		location.y += velocity.y;
		//trace(velocity.x);
	}

	
	
}