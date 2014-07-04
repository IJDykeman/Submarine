package;

import flash.display.Sprite;

class UnderwaterObject extends Actor {


	public var volume: Float;
	public var drag : Float;

	public function new () {
		super();

		
	}

	public override function update(seconds:Float){
		super.update(seconds);
		var drag : Vector = getAllForces();
		velocity.x += drag.x/getMass();
		velocity.y += drag.y/getMass();
		//trace(drag.x);
	}

	private function getDrag () : Vector{
		var facingAreaOfShip:Float = 100;
		return new Vector(-.5*drag*velocity.x*velocity.x*Constants.densityOf20DegreeWater*facingAreaOfShip,
			-.5*drag*velocity.y*velocity.y*Constants.densityOf20DegreeWater*facingAreaOfShip*600 
			* (velocity.y/Math.abs(velocity.y+.000000000001)));
	}

	private function getBouyancyAndGravityForce () : Vector{
		var facingAreaOfShip:Float = 29.76;
		var heightInMeters :Float = height/Constants.pixelsPerMeter;
		var fractionBelowWater :Float = Helpers.clamp((location.y + heightInMeters -Constants.oceanLevel) /
		 heightInMeters,0,1);

		 //((location.y-Constants.oceanLevel)*(height/Constants.pixelsPerMeter)-Constants.oceanLevel);
		 //fractionBelowWater =1;
		// fractionSubmerged/fractionAbove
		if(fractionBelowWater !=1){
			trace("belowWater "+fractionBelowWater);
			//trace("heightInMeters "+heightInMeters);
			//trace("bottombelowwater "+(location.y+heightInMeters-Constants.oceanLevel));
		}

		return new Vector (0,-Constants.g*volume * fractionBelowWater*Constants.densityOf20DegreeWater + mass*Constants.g);
	}
	
	function getAllForces () : Vector{
		var drag :Vector = getDrag();
		var bouyancyAndG = getBouyancyAndGravityForce();
		return new Vector(drag.x+bouyancyAndG.x,drag.y+bouyancyAndG.y);
	}
	
}