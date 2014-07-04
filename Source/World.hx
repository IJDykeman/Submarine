import flash.display.Sprite;


class World extends Sprite{
	public var boot : Submarine;
	var ocean : Ocean;

	public function new () {
		
		super ();
		ocean = new Ocean();
		addChild(ocean);
		boot = new Submarine();
		addChild(boot);


		//interface = new UI();
		for( i in 0...100 ) {
			addChild(new Flotsam(150*i,600));
		}
		trace("world cons");
	}

	public function update(){
		ocean.x=-x;
		boot.update(1.0/30.0);
		x=-boot.location.x*cast(Constants.pixelsPerMeter,Float)+300.0;
	}



}