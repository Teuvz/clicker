package com.ukuleledog.games.clicker;

import motion.Actuate;
import motion.easing.Bounce;
import motion.easing.Linear;
import openfl._v2.geom.Point;
import openfl.Assets;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.TimerEvent;
import openfl.feedback.Haptic;
import openfl.filters.BitmapFilter;
import openfl.filters.GlowFilter;
import openfl.geom.Rectangle;
import openfl.geom.Point;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.utils.Timer;

/**
 * ...
 * @author matt
 */
class GameState extends Sprite
{

	private var points:Float;
	private var level:UInt = 1;
	private var money:Float = 0;
	private var moneyEarned:UInt;
	private var currentPointValue:UInt = 1;
	private var currentPointsNeeded:Float = 10;
	private var percent:Float;
	
	private var lblFormat:TextFormat;
	private var lblLevel:TextField;
	private var lblCurrentPoints:TextField;
	//private var lblNeededPoints:TextField;
	private var lblMoney:TextField;
	private var lblMoneyEarned:TextField;
	
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
	private var exploderBoostValue:UInt = 1;
	private var exploderTimer:Timer;
	
	private var tempMattImage:BitmapData;
	private var mattImage:BitmapData;
	private var mattFrame:UInt = 0;
	private var matt:Sprite;
	private var asuka:Sprite;
	private var levelBar:Sprite;
	private var levelProgressionBar:Sprite;
	private var lastPointsNeeded:Float = 0;
	
	private var shop:Sprite;
	private var shopWindow:Sprite;
	private var shopWindowClose:Sprite;
	private var costume:UInt = 0;
	private var shopCostume1:Sprite;
	private var shopCostume2:Sprite;
	private var shopCostume3:Sprite;
	private var shopCostume4:Sprite;
	private var shopCostume5:Sprite;
	private var shopCostume6:Sprite;
	private var shopCostume7:Sprite;
	private var shopCostume8:Sprite;
	private var shopCostumeNone:Sprite;
	private var hasCostume1:Bool = false;
	private var hasCostume2:Bool = false;
	private var hasCostume3:Bool = false;
	private var hasCostume4:Bool = false;
	private var hasCostume5:Bool = false;
	private var hasCostume6:Bool = false;
	private var hasCostume7:Bool = false;
	private var hasCostume8:Bool = false;
	
	private var canClick:Bool = true;
	private var clicks:UInt;
	
	private var special:Sprite;
	private var specialSuperContainer:Sprite;
	private var specialCooldownTimer:Timer;
	private var specialSuperTimer:Timer;
	private var specialTimer:Timer;
	private var specialSuper:Bool = false;
	private var specialSuperCounter:UInt = 3;
	private var superQteCurrent:UInt = 0;
	private var specialSuperElements:Array<Sprite>;
	private var superQteTimer:Timer;
	
	private var clickBoostCounter:UInt = 15;
	private var moneyBoostCounter:UInt = 15;
	private var exploderBoostCounter:UInt = 15;
	
	private var introBackground:Sprite;
	private var shopFilters:Array<BitmapFilter>;
	
	public function new() 
	{
		super();
		
		clicks = 0;
		points = 0;
		level = 0;
		currentPointValue = 1;
		currentPointsNeeded = 10;
		money = 0;
		canClick = false;
		
		lblFormat = new TextFormat( 'arial', 12 );
		
		lblLevel = new TextField();
		lblLevel.x = 10;
		lblLevel.y = 10;
		lblLevel.width = 900;
		lblLevel.selectable = false;
		lblLevel.defaultTextFormat = lblFormat;
		
		lblCurrentPoints = new TextField();
		lblCurrentPoints.x = 250;
		lblCurrentPoints.y = 398;
		lblCurrentPoints.width = 300;
		lblCurrentPoints.defaultTextFormat = new TextFormat( 'arial', 12, null, null, null, null, null, null, TextFormatAlign.CENTER );
		lblCurrentPoints.height = 17;
		lblCurrentPoints.selectable = false;
		lblCurrentPoints.alpha = 0;
		
		/*lblNeededPoints = new TextField();
		lblNeededPoints.x = 10;
		lblNeededPoints.y = 40;
		lblNeededPoints.width = 900;
		lblNeededPoints.selectable = false;*/
		
		lblMoney = new TextField();
		lblMoney.x = 249;
		lblMoney.y = 415;
		lblMoney.width = 200;
		lblMoney.height = 30;
		lblMoney.defaultTextFormat = lblFormat;
		lblMoney.selectable = false;
		
		lblMoneyEarned = new TextField();
		lblMoneyEarned.x = 450;
		lblMoneyEarned.y = 415;
		lblMoneyEarned.width = 100;
		lblMoneyEarned.height = 30;
		lblMoneyEarned.defaultTextFormat = new TextFormat( 'arial', 12, null, null, null, null, null, null, TextFormatAlign.RIGHT );
		lblMoneyEarned.selectable = false;
		lblMoneyEarned.alpha = 0;
		
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
		lblClickBoost.y = -10;
		lblClickBoost.defaultTextFormat = lblFormat;
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
		lblMoneyBoost.y = -10;
		lblMoneyBoost.defaultTextFormat = lblFormat;
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
		lblExploderBoost.y = -15;
		lblExploderBoost.defaultTextFormat = lblFormat;
		exploderBoost.addChild( lblExploderBoost );
		
		mattImage = Assets.getBitmapData( 'img/matt.png' ); 
		matt = new Sprite();
		matt.x = 250;
		matt.y = 90;
		drawMatt();
		
		levelBar = new Sprite();
		levelBar.graphics.beginFill( 0xBDBDBD );
		levelBar.graphics.drawRect( 0, 0, 300, 15 );
		levelBar.graphics.endFill();
		levelBar.x = 250;
		levelBar.y = 400;
		
		levelProgressionBar = new Sprite();
		levelProgressionBar.graphics.beginFill( 0x3ADF00 );
		levelProgressionBar.graphics.drawRect( 0, 0, 0, 15 );
		levelProgressionBar.graphics.endFill();
		levelProgressionBar.x = 250;
		levelProgressionBar.y = 400;
		
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
		shop.addEventListener( MouseEvent.MOUSE_UP, shopOpenHandler );
		
		shopWindow = new Sprite();
		shopWindow.graphics.lineStyle( 5, 0x000000 );
		shopWindow.graphics.beginFill( 0xFFFFFF );
		shopWindow.graphics.drawRoundRect( 0, 0, 700, 380, 5 );
		shopWindow.graphics.endFill();
		shopWindow.x = 50;
		shopWindow.y = 500;
		
		shopWindowClose = new Sprite();
		//shopWindowClose.graphics.beginFill( 0xFF0000 );
		shopWindowClose.graphics.beginBitmapFill( Assets.getBitmapData( 'img/shop-close.png' ) );
		shopWindowClose.graphics.drawRect( 0, 0, 32, 32 );
		shopWindowClose.graphics.endFill();
		shopWindowClose.x = 685;
		shopWindowClose.y = -15;
		shopWindowClose.buttonMode = true;
		shopWindowClose.addEventListener( MouseEvent.MOUSE_UP, shopCloseHandler );
		shopWindow.addChild( shopWindowClose );
		
		shopCostume6 = createShopButton( 'mario', 6 );		
		shopCostume2 = createShopButton( 'evangelion', 2 );
		shopCostume8 = createShopButton( 'maid', 8 );
		shopCostume3 = createShopButton( 'leia', 3 );
		shopCostume4 = createShopButton( 'pikachu', 4 );
		shopCostume1 = createShopButton( 'cheerleader', 1 );
		shopCostume7 = createShopButton( 'mermaid', 7 );
		shopCostume5 = createShopButton( 'unicorn', 5 );
		shopCostumeNone = createShopButton( 'none', 0 );
		shopCostumeNone.addEventListener( MouseEvent.MOUSE_UP, noCostumeHandler );
		
		specialCooldownTimer = new Timer( 60000 );
		specialCooldownTimer.addEventListener( TimerEvent.TIMER, specialCooldownHandle );
		specialSuperTimer = new Timer( 750 );
		specialSuperTimer.addEventListener( TimerEvent.TIMER, specialSuperEndHandle );
		specialTimer = new Timer( 5000 );
		specialTimer.addEventListener( TimerEvent.TIMER, specialEndHandle );
		
		specialSuperContainer = new Sprite();
		//specialSuperContainer.graphics.beginFill( 0x0000FF );
		specialSuperContainer.graphics.beginBitmapFill( Assets.getBitmapData( 'img/special-super.png' ) );
		specialSuperContainer.graphics.drawRect( 0, 0, 800, 480 );
		specialSuperContainer.graphics.endFill();
		
		superQteTimer = new Timer( 2000 );
		superQteTimer.addEventListener( TimerEvent.TIMER, superQteEnd );
		
		exploderTimer = new Timer(1000);
		exploderTimer.addEventListener( TimerEvent.TIMER, exploderHandler );
		exploderTimer.start();
		
		shopFilters = new Array<BitmapFilter>();
		shopFilters.push( new GlowFilter( 0xFF0000, 0.6, 12, 12, 3, 1, false ) );
		shopCostumeNone.filters = shopFilters;
		
		addEventListener( Event.ADDED_TO_STAGE, init );
	}
	
	private function init( e:Event )
	{
		removeEventListener( Event.ADDED_TO_STAGE, init );
		addEventListener( Event.ENTER_FRAME, loop );
		
		addChild( lblLevel );
		
		//addChild( lblNeededPoints );
		addChild( lblMoney );
		addChild( lblMoneyEarned );
		
		addChild( clickBoost );
		addChild( moneyBoost );
		addChild( exploderBoost );
		
		addChild( matt );
		addChild( asuka );
		addChild( levelBar );
		addChild( levelProgressionBar );
		
		addChild( lblCurrentPoints );
		
		addChild( shop );
		
		//superSpecialDisplay();
		showIntro();
		
		stage.addEventListener( MouseEvent.MOUSE_UP, mouseUpHandler );
	}
	
	private function drawMatt( frameChange:Bool = true )
	{		
		if ( frameChange == true )
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
		if ( canClick )
		{
			clicks++;
			pointHandle(currentPointValue);		
		}
	}
	
	private function pointHandle( pointsValue:Float )
	{
		drawMatt();
		points += pointsValue;
				
		levelProgressionBar.graphics.clear();
		levelProgressionBar.graphics.beginFill( 0x3ADF00 );
		
		percent = Math.round((points - lastPointsNeeded) * 100) / (currentPointsNeeded - lastPointsNeeded) ;
				
		if ( percent < 0 )
			percent = 0;
		else if ( percent > 100 )
			percent = 100;
		
		levelProgressionBar.graphics.drawRect( 0, 0, percent * 3, 15 );
		levelProgressionBar.graphics.endFill();
				
		lblCurrentPoints.text = "+ " + pointsValue + " points";
		Actuate.tween( lblCurrentPoints, 0.2, { alpha: 1 } ).ease( Linear.easeNone ).onComplete(function() {
			Actuate.tween( lblCurrentPoints, 0.5, { alpha: 0 } ).ease( Linear.easeNone );
		});
			
		if ( points >= currentPointsNeeded )
		{
			#if android
			Haptic.vibrate();
			#end
			
			level++;
			
			Actuate.tween( lblLevel, 0.1, { scaleX:1.5, scaleY: 1.5 } ).ease( Linear.easeNone ).onComplete( function() {
				Actuate.tween( lblLevel, 0.5, { scaleX:1, scaleY: 1 } ).ease( Linear.easeNone );
			} );
			
			lastPointsNeeded = currentPointsNeeded;
			currentPointsNeeded = Math.ceil(currentPointsNeeded * 1.5);
			moneyEarned = (Math.round( Math.random() * 10 ) + 1) + moneyEarned + (level * moneyBoostValue);
			
			if ( moneyEarned < (level * 2 ) )
				moneyEarned = level * 2;
			
			money += moneyEarned;
			
			lblMoneyEarned.text = '+ $' + moneyEarned;
			Actuate.tween( lblMoneyEarned, 0.2, { alpha:1 } ).ease( Linear.easeNone ).onComplete( function() {
				Actuate.tween( lblMoneyEarned, 0.2, { alpha:0 } ).ease( Linear.easeNone ).delay(1);
			} );
			
		}
	}
	
	private function loop( e:Event )
	{
		lblLevel.text = "Niveau: " + level;
		//lblCurrentPoints.text = "Click value: " + currentPointValue;
		//lblNeededPoints.text = "Needed points: " + (currentPointsNeeded - points);
		lblMoney.text = "Argent: $" + money;
				
		if (clickBoostCounter > 0 )
			lblClickBoost.text = "$" + clickBoostPrice;
		else
			lblClickBoost.text = "Max !";
		
		if ( moneyBoostCounter > 0 )
			lblMoneyBoost.text = "$" + moneyBoostPrice;
		else
			lblMoneyBoost.text = "Max !";
		
		if ( exploderBoostCounter > 0 )
			lblExploderBoost.text = "$" + exploderBoostPrice;
		else
			lblExploderBoost.text = "Max !";
			
		if ( canClick && special == null && (Math.random() * 1000 > 999 ) )
			showSpecial();
			
		if ( clickBoostCounter == 0 )
			clickBoost.alpha = 0.2;
		else if ( money >= clickBoostPrice )
			clickBoost.alpha = 1;
		else
			clickBoost.alpha = 0.6;
			
		if ( moneyBoostCounter == 0 )
			moneyBoost.alpha = 0.2;
		else if ( money >= moneyBoostPrice )
			moneyBoost.alpha = 1;
		else
			moneyBoost.alpha = 0.6;
			
		if ( exploderBoostCounter == 0 )
			exploderBoost.alpha = 0.2;
		else if ( money >= exploderBoostPrice )
			exploderBoost.alpha = 1;
		else
			exploderBoost.alpha = 0.6;
			
	}
	
	private function showSpecial()
	{
		special = new Sprite();
		special.graphics.beginBitmapFill( Assets.getBitmapData( 'img/special-'+(Math.floor(Math.random() * (4)) + 1)+'.png' ) );
		//special.graphics.beginFill( 0xFF0000 );
		special.graphics.drawRect( 0, 0, 64, 64 );
		special.graphics.endFill();
		special.buttonMode = true;
		special.x = (Math.floor(Math.random() * (600 - 150 + 1)) + 150);
		special.y = (Math.floor(Math.random() * (300 - 30 + 1)) + 30);
		addChild( special );
		specialSuper = true;
		special.addEventListener( MouseEvent.MOUSE_DOWN, specialClickHandle );
		specialSuperTimer.start();
		specialTimer.start();
	}
	
	private function specialCooldownHandle( e:TimerEvent )
	{
		special = null;
		specialCooldownTimer.stop();
	}
	
	private function specialClickHandle( e:MouseEvent )
	{
		special.removeEventListener( MouseEvent.MOUSE_DOWN, specialClickHandle );
		
		canClick = false;
		specialSuperTimer.stop();
		specialTimer.stop();
		
		pointHandle( currentPointsNeeded - points );
		
		Actuate.tween( special, 0.3, { alpha:0 } );
		
		if ( specialSuper )
		{
			superSpecialDisplay();
		}
		else
		{
			canClick = true;
			specialCooldownTimer.start();
		}
	}
	
	private function specialSuperEndHandle( e:TimerEvent )
	{
		specialSuper = false;
		specialSuperTimer.stop();
	}
	
	private function specialEndHandle( e:TimerEvent )
	{
		specialTimer.stop();
		Actuate.tween( special, 0.3, { alpha:0 } ).onComplete( function() {
			special.removeEventListener( MouseEvent.MOUSE_DOWN, specialClickHandle );
			specialCooldownTimer.start();
		} ) ;
	}
	
	private function exploderHandler( e:TimerEvent )
	{
				
		if ( canClick && exploderBoostValue > 1 )
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
		if ( canClick && money >= clickBoostPrice && clickBoostCounter > 0 )
		{
			e.stopPropagation();
			money -= clickBoostPrice;
			
			lblMoneyEarned.text = '- $' + clickBoostPrice;
			Actuate.tween( lblMoneyEarned, 0.2, { alpha:1 } ).ease( Linear.easeNone ).onComplete( function() {
				Actuate.tween( lblMoneyEarned, 0.2, { alpha:0 } ).ease( Linear.easeNone ).delay(1);
			} );
			
			clickBoostPrice *= 2;
			currentPointValue *= 2;
			
			clickBoost.scaleX = 1.1;
			clickBoost.scaleY = 1.1;
			Actuate.tween( clickBoost, 0.5, { scaleX: 1, scaleY: 1 } ).ease( Bounce.easeOut );
			
			clickBoostCounter--;
						
		}
	}
	
	private function moneyBoostHandler( e:MouseEvent )
	{
		if ( canClick && money >= moneyBoostPrice && moneyBoostCounter > 0 )
		{
			e.stopPropagation();
			money -= moneyBoostPrice;
			
			lblMoneyEarned.text = '- $' + moneyBoostPrice;
			Actuate.tween( lblMoneyEarned, 0.2, { alpha:1 } ).ease( Linear.easeNone ).onComplete( function() {
				Actuate.tween( lblMoneyEarned, 0.2, { alpha:0 } ).ease( Linear.easeNone ).delay(1);
			} );
			
			moneyBoostPrice *= 2;
			moneyBoostValue *= 2;
			
			moneyBoost.scaleX = 1.1;
			moneyBoost.scaleY = 1.1;
			Actuate.tween( moneyBoost, 0.5, { scaleX: 1, scaleY: 1 } ).ease( Bounce.easeOut );
			
			moneyBoostCounter--;
		}
	}
	
	private function exploderBoostHandler( e:MouseEvent )
	{
		if ( canClick && money >= exploderBoostPrice && exploderBoostPrice > 0 )
		{
			e.stopPropagation();
			money -= exploderBoostPrice;
			
			lblMoneyEarned.text = '- $' + exploderBoostPrice;
			Actuate.tween( lblMoneyEarned, 0.2, { alpha:1 } ).ease( Linear.easeNone ).onComplete( function() {
				Actuate.tween( lblMoneyEarned, 0.2, { alpha:0 } ).ease( Linear.easeNone ).delay(1);
			} );
			
			exploderBoostPrice *= 2;
			exploderBoostValue = currentPointValue * 2;
			
			exploderBoost.scaleX = 1.1;
			exploderBoost.scaleY = 1.1;
			Actuate.tween( exploderBoost, 0.5, { scaleX: 1, scaleY: 1 } ).ease( Bounce.easeOut );
			
			if ( asuka.alpha == 0 )
				Actuate.tween( asuka, 1, { alpha: 1 } );
				
			exploderBoostPrice--;
		}
	}
	
	private function shopOpenHandler( e:MouseEvent = null )
	{
		if ( e != null )
		e.stopPropagation();
		
		canClick = false;
		
		if ( level >= 10 && !hasCostume1 )
		{
			shopCostume1.alpha = 1;
			shopCostume1.buttonMode = true;
			
			if ( shopCostume1.getChildByName( 'lbl' ) != null )
			shopCostume1.removeChild( shopCostume1.getChildByName( 'lbl' ) );
			
			shopCostume1.addEventListener( MouseEvent.MOUSE_UP, costumeHandler );
		}
		if ( level >= 20 && !hasCostume2 )
		{
			shopCostume2.alpha = 1;
			shopCostume2.buttonMode = true;
			
			if ( shopCostume2.getChildByName( 'lbl' ) != null )
			shopCostume2.removeChild( shopCostume2.getChildByName( 'lbl' ) );
			
			shopCostume2.addEventListener( MouseEvent.MOUSE_UP, costumeHandler );
		}
		if ( level >= 30 && !hasCostume3 )
		{
			shopCostume3.alpha = 1;
			shopCostume3.buttonMode = true;
			
			if ( shopCostume3.getChildByName( 'lbl' ) != null )
			shopCostume3.removeChild( shopCostume3.getChildByName( 'lbl' ) );
			
			shopCostume3.addEventListener( MouseEvent.MOUSE_UP, costumeHandler );
		}
		if ( level >= 40 && !hasCostume4 )
		{
			shopCostume4.alpha = 1;
			shopCostume4.buttonMode = true;
			
			if ( shopCostume4.getChildByName( 'lbl' ) != null )
			shopCostume4.removeChild( shopCostume4.getChildByName( 'lbl' ) );
			
			shopCostume4.addEventListener( MouseEvent.MOUSE_UP, costumeHandler );
		}
		if ( level >= 50 && !hasCostume5 )
		{
			shopCostume5.alpha = 1;
			shopCostume5.buttonMode = true;
			
			if ( shopCostume5.getChildByName( 'lbl' ) != null )
			shopCostume5.removeChild( shopCostume5.getChildByName( 'lbl' ) );
			
			shopCostume5.addEventListener( MouseEvent.MOUSE_UP, costumeHandler );
		}
		if ( level >= 60 && !hasCostume6 )
		{
			shopCostume6.alpha = 1;
			shopCostume6.buttonMode = true;
			
			if ( shopCostume6.getChildByName( 'lbl' ) != null )
			shopCostume6.removeChild( shopCostume6.getChildByName( 'lbl' ) );
			
			shopCostume6.addEventListener( MouseEvent.MOUSE_UP, costumeHandler );
		}
		if ( level >= 70 && !hasCostume7 )
		{
			shopCostume7.alpha = 1;
			shopCostume7.buttonMode = true;
			
			if ( shopCostume7.getChildByName( 'lbl' ) != null )
			shopCostume7.removeChild( shopCostume7.getChildByName( 'lbl' ) );
			
			shopCostume7.addEventListener( MouseEvent.MOUSE_UP, costumeHandler );
		}
		if ( level >= 80 && !hasCostume8 )
		{
			shopCostume8.alpha = 1;
			shopCostume8.buttonMode = true;
			
			if ( shopCostume8.getChildByName( 'lbl' ) != null )
			shopCostume8.removeChild( shopCostume8.getChildByName( 'lbl' ) );
			
			shopCostume8.addEventListener( MouseEvent.MOUSE_UP, costumeHandler );
		}
		
		addChild( shopWindow );
		Actuate.tween( shopWindow, 0.5, { y:50 } ).ease( Bounce.easeOut );
		
	}
	
	private function shopCloseHandler( e:MouseEvent = null )
	{
		if ( e != null )
		e.stopPropagation();
		
		Actuate.tween( shopWindow, 0.5, { y: 500 } ).ease( Linear.easeNone ).onComplete( function() {		
			canClick = true;
			removeChild( shopWindow );
		});
		
	}
	
	private function noCostumeHandler( e:MouseEvent = null )
	{
		costume = 0;
		drawMatt(false);
		shopCloseHandler(e);
	}
	
	private function createShopButton( name:String, position:UInt, level:UInt = 0 )
	{
		var button:Sprite = new Sprite();
		button.name = 'shop-' + position;
		button.buttonMode = false;
		//button.graphics.beginFill( 0x00FF00 );
		button.graphics.beginBitmapFill( Assets.getBitmapData( 'img/shop-' + name + '.png' ) );
		button.graphics.drawRect( 0, 0, 64, 64 );
		button.graphics.endFill();
		
		if ( level == 0 )
			level = position * 10;
		
		if ( position != 0 )
		{
			button.x = position * 70;
			button.y = 100;
			button.alpha = 0.6;
			
			var levelField:TextField = new TextField();
			levelField.text = "( Niveau " + level + " )";
			levelField.defaultTextFormat = lblFormat;
			levelField.y = 65;
			levelField.selectable = false;
			levelField.name = 'lbl';
			button.addChild( levelField );
		}
		else
		{
			button.buttonMode = true;
			button.x = (700 / 2) - (64 / 2);
			button.y = 220;
		}
					
		shopWindow.addChild( button );
		
		return button;
	}
	
	private function costumeHandler( e:MouseEvent )
	{
		e.stopPropagation();
		
		shopWindow.getChildByName( 'shop-' + costume ).filters = null;
		
		switch( e.target.name )
		{
			case 'shop-1':
				hasCostume1 = true;
				costume = 1;
			case 'shop-2':
				hasCostume2 = true;
				costume = 2;
			case 'shop-3':
				hasCostume3 = true;
				costume = 3;
			case 'shop-4':
				hasCostume4 = true;
				costume = 4;
			case 'shop-5':
				hasCostume5 = true;
				costume = 5;
			case 'shop-6':
				hasCostume6 = true;
				costume = 6;
			case 'shop-7':
				hasCostume7 = true;
				costume = 7;
			case 'shop-8':
				hasCostume8 = true;
				costume = 8;
		}
		
		shopWindow.getChildByName( 'shop-' + costume ).filters = shopFilters;
		
		drawMatt(false);
		shopCloseHandler(e);
	}
	
	private function superSpecialDisplay()
	{
		superQteTimer.reset();
		specialSuperElements = new Array<Sprite>();
		addChild( specialSuperContainer );
		
		var i:UInt = 1;
			
		while( i <= specialSuperCounter )
		{
			var superQteElement:Sprite = new Sprite();
			superQteElement.buttonMode = true;
			superQteElement.graphics.clear();
			superQteElement.graphics.lineStyle( 5, 0xFF0000 );
			superQteElement.graphics.beginFill( 0xFF0000, 0.5 );
			superQteElement.graphics.drawCircle( 30, 30, 30 );
			superQteElement.x = (Math.floor(Math.random() * (700 - 100 + 1)) + 100);
			superQteElement.y = (Math.floor(Math.random() * (380 - 80 + 1)) + 80);
			specialSuperContainer.addChild( superQteElement );
			
			var superQteText:TextField = new TextField();
			superQteText.selectable = false;
			superQteText.defaultTextFormat = new TextFormat( 'arial', 20, 0xFF0000, true, null, null, null, null, TextFormatAlign.CENTER );
			superQteText.text = Std.string( i );
			superQteText.width = superQteElement.width - 5;
			superQteText.height = superQteText.textHeight + 2;
			superQteText.y = (superQteElement.height / 2) - (superQteText.height / 1.5);
			superQteText.mouseEnabled = false;
			superQteElement.addChild( superQteText );
			
			specialSuperElements.push( superQteElement );
			
			if ( i != 1 )
			{
				superQteElement.visible = false;
			}
			else
			{
				superQteElement.addEventListener( MouseEvent.MOUSE_DOWN, superQteClick );
			}
			
			i++;
		}
		
		superQteCurrent = 1;
		superQteTimer.start();
		
	}
	
	private function superQteClick( e:MouseEvent )
	{
		var currentQteElement:Sprite = specialSuperElements.shift();
		currentQteElement.removeEventListener( MouseEvent.MOUSE_DOWN, superQteClick );
		specialSuperContainer.removeChild( currentQteElement );
		superQteTimer.stop();
		superQteTimer.reset();
		
		currentQteElement = null;
		currentQteElement = specialSuperElements.shift();
		
		if ( currentQteElement != null )
		{
			currentQteElement.visible = true;
			currentQteElement.addEventListener( MouseEvent.MOUSE_DOWN, superQteClick );
			superQteCurrent++;
			specialSuperElements.unshift( currentQteElement );
		}
		else
		{
			specialSuperCounter++;
			
			if ( moneyBoostCounter > 0 )
			moneyBoostValue *= 2;
			
			if ( exploderBoostCounter > 0 )
			exploderBoostValue *= 2;
			
			if ( clickBoostCounter > 0 )
			currentPointValue *= 2;
			
			removeChild( specialSuperContainer );
			canClick = true;
			specialCooldownTimer.start();
		}
		
	}
	
	private function superQteEnd( e:TimerEvent )
	{
		superQteTimer.stop();
		removeChild( specialSuperContainer );
		canClick = true;
		specialCooldownTimer.start();
	}
	
	private function showIntro() 
	{
		introBackground = new Sprite();
		introBackground.graphics.beginBitmapFill( Assets.getBitmapData('img/intro.png') );
		introBackground.graphics.drawRect( 0, 0, 800, 480 );
		introBackground.graphics.endFill();
		introBackground.buttonMode = true;
		
		var introText:TextField = new TextField();
		introText.selectable = false;
		introText.mouseEnabled = false;
		introText.x = 300;
		introText.y = 50;
		introText.width = 450;
		introText.height = 380;
		introText.defaultTextFormat = lblFormat;
		introText.multiline = true;
		introText.text = "Bienvenue au premier jeu officiel de Je Suis Gros !\n\nAidez moi à perdre du poids en me cliquant dessus pour me faire danser !\n - Plus vous cliquez, plus vous gagnez des niveaux\n - Plus vous gagnez de niveaux, plus vous gagnez d'argent\n - Achetez des bonus pour marquer plus de points en cliquant,\n    augmenter les gains ou avoir une assistante\n - Débloquez des costumes tous les 10 niveaux\n - Cliquez sur les légumes pour avoir des bonus,\n     voir des super bonus pour les plus rapides !\n\nBon jeu !";
		introBackground.addChild( introText );
		
		introBackground.addEventListener( MouseEvent.MOUSE_UP, hideIntro );
		addChild( introBackground );
	}
	
	private function hideIntro( e:MouseEvent )
	{
		e.stopPropagation();
		introBackground.removeEventListener( MouseEvent.MOUSE_UP, hideIntro );
		
		Actuate.tween( introBackground, 0.5, { y: -480 } ).ease( Bounce.easeOut ).onComplete( function() {
			removeChild( introBackground );
			introBackground = null;
			canClick = true;
		} );

	}
	
}