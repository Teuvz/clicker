package com.ukuleledog.games.clicker;

import motion.Actuate;
import motion.easing.Bounce;
import openfl._v2.geom.Point;
import openfl.Assets;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.TimerEvent;
import openfl.geom.Rectangle;
import openfl.geom.Point;
import openfl.text.TextField;
import openfl.utils.Timer;

/**
 * ...
 * @author matt
 */
class GameState extends Sprite
{

	private var points:UInt;
	private var level:UInt = 1;
	private var money:UInt = 0;
	private var moneyEarned:UInt;
	private var currentPointValue:UInt = 1;
	private var currentPointsNeeded:UInt = 10;
	
	private var lblLevel:TextField;
	private var lblCurrentPoints:TextField;
	private var lblNeededPoints:TextField;
	private var lblMoney:TextField;
	
	private var clickBoost:Sprite;
	private var moneyBoost:Sprite;
	private var exploderBoost:Sprite;
	
	private var lblClickBoost:TextField;
	private var lblMoneyBoost:TextField;
	private var lblExploderBoost:TextField;
	
	private var clickBoostPrice:UInt = 10;
	private var moneyBoostPrice:UInt = 50;
	private var exploderBoostPrice:UInt = 100;
	
	private var moneyBoostValue:UInt = 1;
	private var exploderBoostValue:UInt = 0;
	private var exploderTimer:Timer;
	
	private var tempMattImage:BitmapData;
	private var mattImage:BitmapData;
	private var mattFrame:UInt = 0;
	private var matt:Sprite;
	private var asuka:Sprite;
	
	private var shop:Sprite;
	private var costume:UInt = 8;
	
	private var clicks:UInt;
	
	public function new() 
	{
		super();
		
		clicks = 0;
		points = 0;
		level = 1;
		currentPointValue = 1;
		currentPointsNeeded = 10;
		money = 0;
		
		lblLevel = new TextField();
		lblLevel.x = 10;
		lblLevel.y = 10;
		lblLevel.width = 900;
		lblLevel.selectable = false;
		
		lblCurrentPoints = new TextField();
		lblCurrentPoints.x = 10;
		lblCurrentPoints.y = 25;
		lblCurrentPoints.width = 900;
		lblCurrentPoints.selectable = false;
		
		lblNeededPoints = new TextField();
		lblNeededPoints.x = 10;
		lblNeededPoints.y = 40;
		lblNeededPoints.width = 900;
		lblNeededPoints.selectable = false;
		
		lblMoney = new TextField();
		lblMoney.x = 10;
		lblMoney.y = 55;
		lblMoney.width = 900;
		lblMoney.selectable = false;
		
		clickBoost = new Sprite();
		//clickBoost.graphics.beginFill( 0xFF0000 );
		clickBoost.graphics.beginBitmapFill( Assets.getBitmapData( 'img/click.png' ) );
		clickBoost.graphics.drawRect( 0, 0, 64, 64 );
		clickBoost.graphics.endFill();
		clickBoost.x = 10;
		clickBoost.y = 200;
		clickBoost.buttonMode = true;
		clickBoost.addEventListener( MouseEvent.MOUSE_UP, clickBoostHandler );
		
		lblClickBoost = new TextField();
		lblClickBoost.mouseEnabled = false;
		lblClickBoost.selectable = false;
		clickBoost.addChild( lblClickBoost );
		
		moneyBoost = new Sprite();
		//moneyBoost.graphics.beginFill( 0x00FF00 );
		moneyBoost.graphics.beginBitmapFill( Assets.getBitmapData( 'img/money.png' ) );
		moneyBoost.graphics.drawRect( 0, 0, 64, 64 );
		moneyBoost.graphics.endFill();
		moneyBoost.x = 10;
		moneyBoost.y = 300;
		moneyBoost.buttonMode = true;
		moneyBoost.addEventListener( MouseEvent.MOUSE_UP, moneyBoostHandler );
		
		lblMoneyBoost = new TextField();
		lblMoneyBoost.mouseEnabled = false;
		lblMoneyBoost.selectable = false;
		moneyBoost.addChild( lblMoneyBoost );
		
		exploderBoost = new Sprite();
		//exploderBoost.graphics.beginFill( 0x0000FF );
		exploderBoost.graphics.beginBitmapFill( Assets.getBitmapData( 'img/booster.png' ) );
		exploderBoost.graphics.drawRect( 0, 0, 64, 64 );
		exploderBoost.graphics.endFill();
		exploderBoost.x = 10;
		exploderBoost.y = 400;
		exploderBoost.buttonMode = true;
		exploderBoost.addEventListener( MouseEvent.MOUSE_UP, exploderBoostHandler );
		
		lblExploderBoost = new TextField();
		lblExploderBoost.mouseEnabled = false;
		lblExploderBoost.selectable = false;
		exploderBoost.addChild( lblExploderBoost );
		
		mattImage = Assets.getBitmapData( 'img/matt.png' ); 
		matt = new Sprite();
		matt.x = 250;
		matt.y = 90;
		drawMatt();
		
		asuka = new Sprite();
		//asuka.graphics.beginFill( 0xFF0000 );
		asuka.graphics.beginBitmapFill( Assets.getBitmapData( 'img/asuka.png' ) );
		asuka.graphics.drawRect( 0, 0, 128, 128 );
		asuka.graphics.endFill();
		asuka.x = 500;
		asuka.y = 140;
		asuka.alpha = 0;
		
		shop = new Sprite();
		shop.graphics.beginBitmapFill( Assets.getBitmapData( 'img/shop.png' ) );
		shop.graphics.drawRect( 0, 0, 64, 64 );
		shop.graphics.endFill();
		shop.x = 726;
		shop.y = 400;
		shop.buttonMode = true;
		
		exploderTimer = new Timer(1000);
		exploderTimer.addEventListener( TimerEvent.TIMER, exploderHandler );
		exploderTimer.start();
		
		addEventListener( Event.ADDED_TO_STAGE, init );
	}
	
	private function init( e:Event )
	{
		removeEventListener( Event.ADDED_TO_STAGE, init );
		addEventListener( Event.ENTER_FRAME, loop );
		
		addChild( lblLevel );
		addChild( lblCurrentPoints );
		addChild( lblNeededPoints );
		addChild( lblMoney );
		
		addChild( clickBoost );
		addChild( moneyBoost );
		addChild( exploderBoost );
		
		addChild( matt );
		addChild( asuka );
		
		addChild( shop );
		
		stage.addEventListener( MouseEvent.MOUSE_UP, mouseUpHandler );
	}
	
	private function drawMatt()
	{		
		mattFrame++;
		
		if ( mattFrame > 2 )
			mattFrame = 0;
		
		tempMattImage = new BitmapData( 300, 300, false );
		tempMattImage.copyPixels( mattImage, new Rectangle( mattFrame * 300, 300 * costume, 300, 300 ), new Point() );
		matt.graphics.clear();
		matt.graphics.beginBitmapFill( tempMattImage );
		matt.graphics.drawRect( 0, 0, 300, 300 );
		matt.graphics.endFill();
	}
	
	private function mouseUpHandler( e:MouseEvent = null )
	{
		clicks++;
		pointHandle(currentPointValue);		
	}
	
	private function pointHandle( pointsValue:UInt )
	{
		drawMatt();
		points += pointsValue;
		
		if ( points >= currentPointsNeeded )
		{
			level++;
			currentPointsNeeded = Math.ceil(currentPointsNeeded * 1.5);
			moneyEarned = (Math.round( Math.random() * 10 ) + 1) + moneyEarned + (level * moneyBoostValue);
			
			if ( moneyEarned < (level * 2 ) )
				moneyEarned = level * 2;
			
			money += moneyEarned;
		}
	}
	
	private function loop( e:Event )
	{
		lblLevel.text = "Level: " + level;
		lblCurrentPoints.text = "Click value: " + currentPointValue;
		lblNeededPoints.text = "Needed points: " + (currentPointsNeeded - points);
		lblMoney.text = "Money: $" + money;
		
		lblClickBoost.text = "$"+clickBoostPrice;
		lblMoneyBoost.text = "$"+moneyBoostPrice;
		lblExploderBoost.text = "$"+exploderBoostPrice;
	}
	
	private function exploderHandler( e:TimerEvent )
	{
				
		if ( exploderBoostValue > 0 )
		{
			pointHandle(exploderBoostValue);
			
			asuka.graphics.clear();
			asuka.graphics.beginBitmapFill( Assets.getBitmapData( 'img/asuka-click.png' ) );
			asuka.graphics.drawRect( 0, 0, 128, 128 );
			asuka.graphics.endFill();
			asuka.x = 498;
			
			Actuate.tween( asuka, 0.5, { x: 500 } ).ease( Bounce.easeInOut ).onComplete( function() {
				asuka.graphics.clear();
				asuka.graphics.beginBitmapFill( Assets.getBitmapData( 'img/asuka.png' ) );
				asuka.graphics.drawRect( 0, 0, 128, 128 );
				asuka.graphics.endFill();
			} );
			
		}
	}
	
	private function clickBoostHandler( e:MouseEvent )
	{
		if ( money >= clickBoostPrice )
		{
			e.stopPropagation();
			money -= clickBoostPrice;
			clickBoostPrice *= 2;
			currentPointValue *= 2;
			
			clickBoost.scaleX = 1.1;
			clickBoost.scaleY = 1.1;
			Actuate.tween( clickBoost, 0.5, { scaleX: 1, scaleY: 1 } ).ease( Bounce.easeOut );
		}
	}
	
	private function moneyBoostHandler( e:MouseEvent )
	{
		if ( money >= moneyBoostPrice )
		{
			e.stopPropagation();
			money -= moneyBoostPrice;
			moneyBoostPrice *= 2;
			moneyBoostValue *= 2;
			
			moneyBoost.scaleX = 1.1;
			moneyBoost.scaleY = 1.1;
			Actuate.tween( moneyBoost, 0.5, { scaleX: 1, scaleY: 1 } ).ease( Bounce.easeOut );
		}
	}
	
	private function exploderBoostHandler( e:MouseEvent )
	{
		if ( money >= exploderBoostPrice )
		{
			e.stopPropagation();
			money -= exploderBoostPrice;
			exploderBoostPrice *= 2;
			
			exploderBoostValue = currentPointValue * 2;
			
			exploderBoost.scaleX = 1.1;
			exploderBoost.scaleY = 1.1;
			Actuate.tween( exploderBoost, 0.5, { scaleX: 1, scaleY: 1 } ).ease( Bounce.easeOut );
			
			if ( asuka.alpha == 0 )
				Actuate.tween( asuka, 1, { alpha: 1 } );
		}
	}
	
}