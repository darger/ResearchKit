/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <ResearchKit/ORKActiveStepCustomView.h>

@class _ORKQuantityPairView, ORKContinueSkipContainerView, NSArray, NSLayoutConstraint, _ORKSpatialSpanMemoryGameView, NSString, UIBarButtonItem;

@interface _ORKSpatialSpanMemoryContentView : ORKActiveStepCustomView {

	_ORKQuantityPairView* _quantityPairView;
	ORKContinueSkipContainerView* _continueView;
	NSArray* _constraints;
	NSLayoutConstraint* _topConstraint;
	BOOL _footerHidden;
	_ORKSpatialSpanMemoryGameView* _gameView;
	NSString* _capitalizedPluralItemDescription;
	long long _numberOfItems;
	long long _score;
	UIBarButtonItem* _buttonItem;

}

@property (nonatomic,readonly) _ORKSpatialSpanMemoryGameView * gameView;               //@synthesize gameView=_gameView - In the implementation block
@property (assign,getter=isFooterHidden,nonatomic) BOOL footerHidden;                  //@synthesize footerHidden=_footerHidden - In the implementation block
@property (nonatomic,retain) NSString * capitalizedPluralItemDescription;              //@synthesize capitalizedPluralItemDescription=_capitalizedPluralItemDescription - In the implementation block
@property (assign,nonatomic) long long numberOfItems;                                  //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) long long score;                                          //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * buttonItem;                             //@synthesize buttonItem=_buttonItem - In the implementation block
-(void)setFooterHidden:(BOOL)arg1 ;
-(_ORKSpatialSpanMemoryGameView *)gameView;
-(void)setButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setCapitalizedPluralItemDescription:(NSString *)arg1 ;
-(id)_countView;
-(id)_scoreView;
-(void)_updateMargins;
-(void)_updateFooterHidden;
-(BOOL)isFooterHidden;
-(NSString *)capitalizedPluralItemDescription;
-(void)setNumberOfItems:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(long long)numberOfItems;
-(long long)score;
-(void)setScore:(long long)arg1 ;
-(UIBarButtonItem *)buttonItem;
@end

