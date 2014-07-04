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
			-.5*drag*velocity.y*velocity.y*Constants.densityOf20DegreeWater*facingAreaOfShip);
	}

	private function getBouyancyAndGravityForce () : Vector{
		var facingAreaOfShip:Float = 29.76;
		return new Vector (0,0);//(0,-Constants.g*volume*Constants.densityOf20DegreeWater + mass*Constants.g);
	}
	
	function getAllForces () : Vector{
		var drag :Vector = getDrag();
		var bouyancyAndG = getBouyancyAndGravityForce();
		return new Vector(drag.x+bouyancyAndG.x,drag.y+bouyancyAndG.y);
	}
	
}