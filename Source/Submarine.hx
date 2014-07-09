package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import openfl.Assets;
import motion.Actuate;
import motion.easing.Quad;
import motion.easing.Elastic;


class Submarine extends UnderwaterObject {
	
	var engineSettingNormal : Float=0;
	var enginePower : Float = 1000;
	var sailor:Sailor;
	var sternBalastTankLevelNormal:Float = .5;
	var bowBalastTankLevelNormal:Float = .5;

	public function new () {
		super();
		volume = 1996;
		setMass(1995406);

		super ();
		bitmap = new Bitmap (Assets.getBitmapData ("assets/sub.png"));
		var oldWidth = bitmap.width;
		bitmap.width =67.1*Constants.pixelsPerMeter;
		bitmap.height *= 67.1*Constants.pixelsPerMeter/oldWidth;
		bitmap.x = -bitmap.width/2;
		bitmap.y = 0;
		this.addChild(bitmap);
		velocity = new Vector(0,0);
		velocity.x=0;
		drag = .09;
		location = new Vector(2,15);
		engineSettingNormal = 0;

		sailor = new Sailor();
		addChild(sailor);
		//rotation= 20;
	}

	public override function update(seconds:Float){
		super.update(seconds);
		setMass(1985406+10000.0*sternBalastTankLevelNormal + 10000.0*bowBalastTankLevelNormal);
		velocity.x += engineSettingNormal*(enginePower/getMass());

		if(velocity.x<.00001){
			velocity.x=0;
		}

		location.x += velocity.x;
		location.y += velocity.y;
		//trace(velocity.x);
		sailor.update(seconds);

		var newRotation:Float = 0;
		newRotation -= (sternBalastTankLevelNormal - bowBalastTankLevelNormal)*40;
		Actuate.tween (this, 2, { rotation: newRotation }, false).ease(Quad.easeOut);
		//rotation = newRotation;
	}

	public function setEnginePower(nPower:Float){
		engineSettingNormal = nPower;
	}


	public function setBalastTankLevelNormal(nLevel:Float, shipEnd : ShipEnd){
		switch(shipEnd){
			case Stern:
			Actuate.tween (this, 4, { sternBalastTankLevelNormal: nLevel }, false).ease(Quad.easeOut);
			//sternBalastTankLevelNormal = nLevel;
			case Bow:
			Actuate.tween (this, 4, { bowBalastTankLevelNormal: nLevel }, false).ease(Quad.easeOut);
			//bowBalastTankLevelNormal = nLevel;
		}
	}

	
	
}