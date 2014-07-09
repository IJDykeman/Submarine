#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Flotsam
#include <Flotsam.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_SetBalastTankLevelUIAction
#include <SetBalastTankLevelUIAction.h>
#endif
#ifndef INCLUDED_SetEnginePowerUIAction
#include <SetEnginePowerUIAction.h>
#endif
#ifndef INCLUDED_ShipEnd
#include <ShipEnd.h>
#endif
#ifndef INCLUDED_Submarine
#include <Submarine.h>
#endif
#ifndef INCLUDED_UI
#include <UI.h>
#endif
#ifndef INCLUDED_UIAction
#include <UIAction.h>
#endif
#ifndef INCLUDED_UIActionType
#include <UIActionType.h>
#endif
#ifndef INCLUDED_UnderwaterObject
#include <UnderwaterObject.h>
#endif
#ifndef INCLUDED_World
#include <World.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",15,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->get_stage()->set_color((int)10273522);
	HX_STACK_LINE(18)
	::World _g = ::World_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	this->world = _g;
	HX_STACK_LINE(19)
	this->addChild(this->world);
	HX_STACK_LINE(20)
	this->get_stage()->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
	HX_STACK_LINE(21)
	this->get_stage()->addEventListener(::openfl::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
	HX_STACK_LINE(22)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(24)
	::UI _g1 = ::UI_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	this->mainUI = _g1;
	HX_STACK_LINE(25)
	this->mainUI->set_y((int)0);
	HX_STACK_LINE(26)
	this->addChild(this->mainUI);
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::onEnterFrame( ::openfl::events::Event event){
{
		HX_STACK_FRAME("Main","onEnterFrame",0x016e4b29,"Main.onEnterFrame","Main.hx",32,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(32)
		this->world->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onEnterFrame,(void))

Void Main_obj::onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","onMouseDown",0x100c4c73,"Main.onMouseDown","Main.hx",36,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(37)
		int clickX;		HX_STACK_VAR(clickX,"clickX");
		HX_STACK_LINE(37)
		clickX = hx::TCast< Int >::cast(event->stageX);
		HX_STACK_LINE(38)
		int clickY;		HX_STACK_VAR(clickY,"clickY");
		HX_STACK_LINE(38)
		clickY = hx::TCast< Int >::cast(event->stageY);
		HX_STACK_LINE(39)
		Array< ::Dynamic > UIActions = this->mainUI->getActionsFromClick(clickX,clickY);		HX_STACK_VAR(UIActions,"UIActions");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(40)
			int _g = UIActions->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			while((true)){
				HX_STACK_LINE(40)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(40)
					break;
				}
				HX_STACK_LINE(40)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(41)
				this->handleUIAction(UIActions->__get(i).StaticCast< ::UIAction >());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onMouseDown,(void))

Void Main_obj::onResize( ::openfl::events::Event e){
{
		HX_STACK_FRAME("Main","onResize",0x2f30f728,"Main.onResize","Main.hx",50,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(51)
		int scaleX = this->get_stage()->get_stageWidth();		HX_STACK_VAR(scaleX,"scaleX");
		HX_STACK_LINE(52)
		int scaleY = this->get_stage()->get_stageHeight();		HX_STACK_VAR(scaleY,"scaleY");
		HX_STACK_LINE(53)
		this->mainUI->handleResize(scaleX,scaleY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onResize,(void))

Void Main_obj::handleUIAction( ::UIAction action){
{
		HX_STACK_FRAME("Main","handleUIAction",0x2714f947,"Main.handleUIAction","Main.hx",58,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(58)
		::UIActionType _g = action->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(60)
				::Flotsam _g1 = ::Flotsam_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(60)
				this->addChild(_g1);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(62)
				Float _g1 = (hx::TCast< SetEnginePowerUIAction >::cast(action))->getPowerNormal();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(62)
				this->world->boot->setEnginePower(_g1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(65)
				Float _g2 = (hx::TCast< SetBalastTankLevelUIAction >::cast(action))->getLevelNormal();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(66)
				::ShipEnd _g3 = (hx::TCast< SetBalastTankLevelUIAction >::cast(action))->getShipEnd();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(64)
				this->world->boot->setBalastTankLevelNormal(_g2,_g3);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,handleUIAction,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(mainUI,"mainUI");
	HX_MARK_MEMBER_NAME(world,"world");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mainUI,"mainUI");
	HX_VISIT_MEMBER_NAME(world,"world");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mainUI") ) { return mainUI; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleUIAction") ) { return handleUIAction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::World >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mainUI") ) { mainUI=inValue.Cast< ::UI >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mainUI"));
	outFields->push(HX_CSTRING("world"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::UI*/ ,(int)offsetof(Main_obj,mainUI),HX_CSTRING("mainUI")},
	{hx::fsObject /*::World*/ ,(int)offsetof(Main_obj,world),HX_CSTRING("world")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mainUI"),
	HX_CSTRING("world"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onResize"),
	HX_CSTRING("handleUIAction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

