package; 
import flash.display.Bitmap;
import flash.display.Sprite;

class Actor extends Sprite {
	public var bitmap:Bitmap;

	var mass: Float;

	public var velocity : Vector;
	public var location : Vector;

	public function new () {
		super();		
		
	}

	public function update(seconds:Float){
		x = location.x*Constants.pixelsPerMeter;
		y = location.y*Constants.pixelsPerMeter;
	}

	public function getMass():Float{
		return mass;
	}
	
	public function setMass (nMass:Float){
		mass = nMass;
	}
	
}