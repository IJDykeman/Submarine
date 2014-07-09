#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Constants
#include <Constants.h>
#endif
#ifndef INCLUDED_Sailor
#include <Sailor.h>
#endif
#ifndef INCLUDED_ShipEnd
#include <ShipEnd.h>
#endif
#ifndef INCLUDED_Submarine
#include <Submarine.h>
#endif
#ifndef INCLUDED_UnderwaterObject
#include <UnderwaterObject.h>
#endif
#ifndef INCLUDED_Vector
#include <Vector.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quad
#include <motion/easing/Quad.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Submarine_obj::__construct()
{
HX_STACK_FRAME("Submarine","new",0x94731c54,"Submarine.new","Submarine.hx",12,0x6921c99c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->bowBalastTankLevelNormal = .5;
	HX_STACK_LINE(17)
	this->sternBalastTankLevelNormal = .5;
	HX_STACK_LINE(15)
	this->enginePower = (int)1000;
	HX_STACK_LINE(14)
	this->engineSettingNormal = (int)0;
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->volume = (int)1996;
	HX_STACK_LINE(23)
	this->setMass((int)1995406);
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	::openfl::display::BitmapData _g = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/sub.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	::openfl::display::Bitmap _g1 = ::openfl::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	this->bitmap = _g1;
	HX_STACK_LINE(27)
	Float oldWidth = this->bitmap->get_width();		HX_STACK_VAR(oldWidth,"oldWidth");
	HX_STACK_LINE(28)
	this->bitmap->set_width((67.1 * ::Constants_obj::pixelsPerMeter));
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::openfl::display::Bitmap _g2 = this->bitmap;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(29)
		Float _g21 = _g2->get_height();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(29)
		Float _g3 = (_g21 * ((Float((67.1 * ::Constants_obj::pixelsPerMeter)) / Float(oldWidth))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(29)
		_g2->set_height(_g3);
	}
	HX_STACK_LINE(30)
	Float _g4 = -(this->bitmap->get_width());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(30)
	Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(30)
	this->bitmap->set_x(_g5);
	HX_STACK_LINE(31)
	this->bitmap->set_y((int)0);
	HX_STACK_LINE(32)
	this->addChild(this->bitmap);
	HX_STACK_LINE(33)
	::Vector _g6 = ::Vector_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(33)
	this->velocity = _g6;
	HX_STACK_LINE(34)
	this->velocity->x = (int)0;
	HX_STACK_LINE(35)
	this->drag = .09;
	HX_STACK_LINE(36)
	::Vector _g7 = ::Vector_obj::__new((int)2,(int)15);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(36)
	this->location = _g7;
	HX_STACK_LINE(37)
	this->engineSettingNormal = (int)0;
	HX_STACK_LINE(39)
	::Sailor _g8 = ::Sailor_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(39)
	this->sailor = _g8;
	HX_STACK_LINE(40)
	this->addChild(this->sailor);
}
;
	return null();
}

//Submarine_obj::~Submarine_obj() { }

Dynamic Submarine_obj::__CreateEmpty() { return  new Submarine_obj; }
hx::ObjectPtr< Submarine_obj > Submarine_obj::__new()
{  hx::ObjectPtr< Submarine_obj > result = new Submarine_obj();
	result->__construct();
	return result;}

Dynamic Submarine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Submarine_obj > result = new Submarine_obj();
	result->__construct();
	return result;}

Void Submarine_obj::update( Float seconds){
{
		HX_STACK_FRAME("Submarine","update",0x448f2a95,"Submarine.update","Submarine.hx",44,0x6921c99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(seconds,"seconds")
		HX_STACK_LINE(45)
		this->super::update(seconds);
		HX_STACK_LINE(46)
		this->setMass((((int)1985406 + (10000.0 * this->sternBalastTankLevelNormal)) + (10000.0 * this->bowBalastTankLevelNormal)));
		HX_STACK_LINE(47)
		Float _g = this->getMass();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		Float _g1 = (Float(this->enginePower) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		Float _g2 = (this->engineSettingNormal * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(47)
		hx::AddEq(this->velocity->x,_g2);
		HX_STACK_LINE(49)
		if (((this->velocity->x < .00001))){
			HX_STACK_LINE(50)
			this->velocity->x = (int)0;
		}
		HX_STACK_LINE(53)
		hx::AddEq(this->location->x,this->velocity->x);
		HX_STACK_LINE(54)
		hx::AddEq(this->location->y,this->velocity->y);
		HX_STACK_LINE(56)
		this->sailor->update(seconds);
		HX_STACK_LINE(58)
		Float newRotation = (int)0;		HX_STACK_VAR(newRotation,"newRotation");
		HX_STACK_LINE(59)
		hx::SubEq(newRotation,(((this->sternBalastTankLevelNormal - this->bowBalastTankLevelNormal)) * (int)40));
		HX_STACK_LINE(60)
		::motion::easing::IEasing _g3 = ::motion::easing::Quad_obj::get_easeOut();		HX_STACK_VAR(_g3,"_g3");
		struct _Function_1_1{
			inline static Dynamic Block( Float &newRotation){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Submarine.hx",60,0x6921c99c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("rotation") , newRotation,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(60)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),(int)2,_Function_1_1::Block(newRotation),false,null())->ease(_g3);
	}
return null();
}


Void Submarine_obj::setEnginePower( Float nPower){
{
		HX_STACK_FRAME("Submarine","setEnginePower",0x002f60ed,"Submarine.setEnginePower","Submarine.hx",65,0x6921c99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nPower,"nPower")
		HX_STACK_LINE(65)
		this->engineSettingNormal = nPower;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Submarine_obj,setEnginePower,(void))

Void Submarine_obj::setBalastTankLevelNormal( Float nLevel,::ShipEnd shipEnd){
{
		HX_STACK_FRAME("Submarine","setBalastTankLevelNormal",0x9d6c7076,"Submarine.setBalastTankLevelNormal","Submarine.hx",70,0x6921c99c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nLevel,"nLevel")
		HX_STACK_ARG(shipEnd,"shipEnd")
		HX_STACK_LINE(70)
		switch( (int)(shipEnd->__Index())){
			case (int)0: {
				HX_STACK_LINE(72)
				this->sternBalastTankLevelNormal = nLevel;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(74)
				this->bowBalastTankLevelNormal = nLevel;
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Submarine_obj,setBalastTankLevelNormal,(void))


Submarine_obj::Submarine_obj()
{
}

void Submarine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Submarine);
	HX_MARK_MEMBER_NAME(engineSettingNormal,"engineSettingNormal");
	HX_MARK_MEMBER_NAME(enginePower,"enginePower");
	HX_MARK_MEMBER_NAME(sailor,"sailor");
	HX_MARK_MEMBER_NAME(sternBalastTankLevelNormal,"sternBalastTankLevelNormal");
	HX_MARK_MEMBER_NAME(bowBalastTankLevelNormal,"bowBalastTankLevelNormal");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Submarine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(engineSettingNormal,"engineSettingNormal");
	HX_VISIT_MEMBER_NAME(enginePower,"enginePower");
	HX_VISIT_MEMBER_NAME(sailor,"sailor");
	HX_VISIT_MEMBER_NAME(sternBalastTankLevelNormal,"sternBalastTankLevelNormal");
	HX_VISIT_MEMBER_NAME(bowBalastTankLevelNormal,"bowBalastTankLevelNormal");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Submarine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sailor") ) { return sailor; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enginePower") ) { return enginePower; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setEnginePower") ) { return setEnginePower_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"engineSettingNormal") ) { return engineSettingNormal; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"bowBalastTankLevelNormal") ) { return bowBalastTankLevelNormal; }
		if (HX_FIELD_EQ(inName,"setBalastTankLevelNormal") ) { return setBalastTankLevelNormal_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"sternBalastTankLevelNormal") ) { return sternBalastTankLevelNormal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Submarine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"sailor") ) { sailor=inValue.Cast< ::Sailor >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enginePower") ) { enginePower=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"engineSettingNormal") ) { engineSettingNormal=inValue.Cast< Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"bowBalastTankLevelNormal") ) { bowBalastTankLevelNormal=inValue.Cast< Float >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"sternBalastTankLevelNormal") ) { sternBalastTankLevelNormal=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Submarine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("engineSettingNormal"));
	outFields->push(HX_CSTRING("enginePower"));
	outFields->push(HX_CSTRING("sailor"));
	outFields->push(HX_CSTRING("sternBalastTankLevelNormal"));
	outFields->push(HX_CSTRING("bowBalastTankLevelNormal"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Submarine_obj,engineSettingNormal),HX_CSTRING("engineSettingNormal")},
	{hx::fsFloat,(int)offsetof(Submarine_obj,enginePower),HX_CSTRING("enginePower")},
	{hx::fsObject /*::Sailor*/ ,(int)offsetof(Submarine_obj,sailor),HX_CSTRING("sailor")},
	{hx::fsFloat,(int)offsetof(Submarine_obj,sternBalastTankLevelNormal),HX_CSTRING("sternBalastTankLevelNormal")},
	{hx::fsFloat,(int)offsetof(Submarine_obj,bowBalastTankLevelNormal),HX_CSTRING("bowBalastTankLevelNormal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("engineSettingNormal"),
	HX_CSTRING("enginePower"),
	HX_CSTRING("sailor"),
	HX_CSTRING("sternBalastTankLevelNormal"),
	HX_CSTRING("bowBalastTankLevelNormal"),
	HX_CSTRING("update"),
	HX_CSTRING("setEnginePower"),
	HX_CSTRING("setBalastTankLevelNormal"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Submarine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Submarine_obj::__mClass,"__mClass");
};

#endif

Class Submarine_obj::__mClass;

void Submarine_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Submarine"), hx::TCanCast< Submarine_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Submarine_obj::__boot()
{
}

