package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import openfl.Assets;


class Submarine extends UnderwaterObject {
	
	var engineSettingNormal : Float=0;
	var enginePower : Float = 1000;
	var sailor:Sailor;
	var balastTankLevelNormal:Float = .5;

	public function new () {
		super();
		volume = 1996;
		setMass(1995406);

		super ();
		bitmap = new Bitmap (Assets.getBitmapData ("assets/sub.png"));
		var oldWidth = bitmap.width;
		bitmap.width =67.1*Constants.pixelsPerMeter;
		bitmap.height *= 67.1*Constants.pixelsPerMeter/oldWidth;
		bitmap.x = 0;
		bitmap.y = 0;
		this.addChild(bitmap);
		velocity = new Vector(0,0);
		velocity.x=0;
		drag = .09;
		location = new Vector(2,15);
		engineSettingNormal = 0;

		sailor = new Sailor();
		addChild(sailor);
	}

	public override function update(seconds:Float){
		super.update(seconds);
		setMass(1985406+20000.0*balastTankLevelNormal);
		velocity.x += engineSettingNormal*(enginePower/getMass());

		if(velocity.x<.00001){
			velocity.x=0;
		}

		location.x += velocity.x;
		location.y += velocity.y;
		//trace(velocity.x);
		sailor.update(seconds);
	}

	public function setEnginePower(nPower:Float){
		engineSettingNormal = nPower;
	}


	public function setBalastTankLevelNormal(nLevel:Float){
		balastTankLevelNormal = nLevel;
	}
	
	
}