#include <hxcpp.h>

#ifndef INCLUDED_SetBalastTankLevelUIAction
#include <SetBalastTankLevelUIAction.h>
#endif
#ifndef INCLUDED_ShipEnd
#include <ShipEnd.h>
#endif
#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIBalastTankControl
#include <UIBalastTankControl.h>
#endif
#ifndef INCLUDED_UIElement
#include <UIElement.h>
#endif
#ifndef INCLUDED_UILever
#include <UILever.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

Void UIBalastTankControl_obj::__construct(::ShipEnd nShipEnd)
{
HX_STACK_FRAME("UIBalastTankControl","new",0xcb7988fc,"UIBalastTankControl.new","UIBalastTankControl.hx",15,0xec3fa9f4)
HX_STACK_THIS(this)
HX_STACK_ARG(nShipEnd,"nShipEnd")
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->shipEnd = nShipEnd;
	HX_STACK_LINE(18)
	::openfl::display::BitmapData _g = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/verticlePipe.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	::openfl::display::Bitmap _g1 = ::openfl::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(18)
	this->bitmap = _g1;
	HX_STACK_LINE(19)
	this->bitmap->set_width((int)100);
	HX_STACK_LINE(20)
	Float _g2 = this->bitmap->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	Float _g3 = (_g2 * 1.61803398875);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(20)
	this->bitmap->set_height(_g3);
	HX_STACK_LINE(21)
	this->addChild(this->bitmap);
	HX_STACK_LINE(22)
	int _g4 = ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(22)
	Float _g5 = this->bitmap->get_height();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(22)
	Float _g6 = (_g4 - _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(22)
	this->bitmap->set_y(_g6);
	HX_STACK_LINE(23)
	this->bitmap->set_x((int)255);
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::ShipEnd _g7 = this->shipEnd;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(24)
		switch( (int)(_g7->__Index())){
			case (int)0: {
				HX_STACK_LINE(26)
				::openfl::display::Bitmap _g11 = this->bitmap;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(26)
				Float _g71 = _g11->get_x();		HX_STACK_VAR(_g71,"_g71");
				HX_STACK_LINE(26)
				Float _g8 = _g71;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(26)
				_g11->set_x(_g8);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(28)
				::openfl::display::Bitmap _g11 = this->bitmap;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(28)
				Float _g9 = _g11->get_x();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(28)
				Float _g10 = (_g9 + (int)120);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(28)
				_g11->set_x(_g10);
			}
			;break;
		}
	}
	HX_STACK_LINE(31)
	::openfl::display::BitmapData _g11 = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/woodenBall.png"),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(31)
	::openfl::display::Bitmap _g12 = ::openfl::display::Bitmap_obj::__new(_g11,null(),null());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(31)
	this->handle = _g12;
	HX_STACK_LINE(32)
	this->handle->set_width((int)160);
	HX_STACK_LINE(33)
	this->handle->set_height((int)40);
	HX_STACK_LINE(34)
	Float _g13 = this->bitmap->get_x();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(34)
	Float _g14 = this->bitmap->get_width();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(34)
	Float _g15 = (Float(_g14) / Float((int)2));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(34)
	Float _g16 = (_g13 + _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(34)
	Float _g17 = this->handle->get_width();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(34)
	Float _g18 = (Float(_g17) / Float((int)2));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(34)
	Float _g19 = (_g16 - _g18);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(34)
	this->handle->set_x(_g19);
	HX_STACK_LINE(35)
	int _g20 = ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(35)
	Float _g21 = this->handle->get_height();		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(35)
	Float _g22 = (_g20 - _g21);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(35)
	this->handle->set_y(_g22);
	HX_STACK_LINE(36)
	this->addChild(this->handle);
	HX_STACK_LINE(37)
	::openfl::display::DisplayObjectContainer _g23 = this->bitmap->get_parent();		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(37)
	::openfl::geom::Rectangle limits1 = this->bitmap->getBounds(_g23);		HX_STACK_VAR(limits1,"limits1");
}
;
	return null();
}

//UIBalastTankControl_obj::~UIBalastTankControl_obj() { }

Dynamic UIBalastTankControl_obj::__CreateEmpty() { return  new UIBalastTankControl_obj; }
hx::ObjectPtr< UIBalastTankControl_obj > UIBalastTankControl_obj::__new(::ShipEnd nShipEnd)
{  hx::ObjectPtr< UIBalastTankControl_obj > result = new UIBalastTankControl_obj();
	result->__construct(nShipEnd);
	return result;}

Dynamic UIBalastTankControl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIBalastTankControl_obj > result = new UIBalastTankControl_obj();
	result->__construct(inArgs[0]);
	return result;}

::UIAction UIBalastTankControl_obj::onClick( int mouseX,int mouseY){
	HX_STACK_FRAME("UIBalastTankControl","onClick",0x2d805145,"UIBalastTankControl.onClick","UIBalastTankControl.hx",44,0xec3fa9f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mouseX,"mouseX")
	HX_STACK_ARG(mouseY,"mouseY")
	HX_STACK_LINE(45)
	this->super::onClick(mouseX,mouseY);
	HX_STACK_LINE(46)
	::haxe::Log_obj::trace((HX_CSTRING("balast set to ") + this->settingNormal),hx::SourceInfo(HX_CSTRING("UIBalastTankControl.hx"),46,HX_CSTRING("UIBalastTankControl"),HX_CSTRING("onClick")));
	HX_STACK_LINE(47)
	Float _g = ::Math_obj::abs((this->settingNormal - .5));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	if (((_g < .1))){
		HX_STACK_LINE(48)
		this->settingNormal = .5;
	}
	HX_STACK_LINE(50)
	return ::SetBalastTankLevelUIAction_obj::__new(this->settingNormal,this->shipEnd);
}


::ShipEnd UIBalastTankControl_obj::getShipEnd( ){
	HX_STACK_FRAME("UIBalastTankControl","getShipEnd",0x8231c26d,"UIBalastTankControl.getShipEnd","UIBalastTankControl.hx",54,0xec3fa9f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->shipEnd;
}


HX_DEFINE_DYNAMIC_FUNC0(UIBalastTankControl_obj,getShipEnd,return )


UIBalastTankControl_obj::UIBalastTankControl_obj()
{
}

void UIBalastTankControl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIBalastTankControl);
	HX_MARK_MEMBER_NAME(shipEnd,"shipEnd");
	::UILever_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIBalastTankControl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shipEnd,"shipEnd");
	::UILever_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIBalastTankControl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shipEnd") ) { return shipEnd; }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getShipEnd") ) { return getShipEnd_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIBalastTankControl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shipEnd") ) { shipEnd=inValue.Cast< ::ShipEnd >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIBalastTankControl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shipEnd"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ShipEnd*/ ,(int)offsetof(UIBalastTankControl_obj,shipEnd),HX_CSTRING("shipEnd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("shipEnd"),
	HX_CSTRING("onClick"),
	HX_CSTRING("getShipEnd"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIBalastTankControl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIBalastTankControl_obj::__mClass,"__mClass");
};

#endif

Class UIBalastTankControl_obj::__mClass;

void UIBalastTankControl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("UIBalastTankControl"), hx::TCanCast< UIBalastTankControl_obj> ,sStaticFields,sMemberFields,
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

void UIBalastTankControl_obj::__boot()
{
}

