/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:13 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <UIKit/UIView.h>
#import <ResearchKit/_ORKSpatialSpanTargetViewDelegate.h>

@protocol _ORKSpatialSpanMemoryGameViewDelegate;
@class NSArray, UIImage, NSString;

@interface _ORKSpatialSpanMemoryGameView : UIView <_ORKSpatialSpanTargetViewDelegate> {

	id<_ORKSpatialSpanMemoryGameViewDelegate> _delegate;
	NSArray* _tileViews;
	UIImage* _customTargetImage;
	ORKGridSize _gridSize;

}

@property (assign,nonatomic,__weak) id<_ORKSpatialSpanMemoryGameViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) ORKGridSize gridSize;                                                   //@synthesize gridSize=_gridSize - In the implementation block
@property (nonatomic,readonly) long long numberOfTiles; 
@property (nonatomic,readonly) NSArray * tileViews;                                                  //@synthesize tileViews=_tileViews - In the implementation block
@property (nonatomic,retain) UIImage * customTargetImage;                                            //@synthesize customTargetImage=_customTargetImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)tileViews;
-(void)setGridSize:(ORKGridSize)arg1 ;
-(UIImage *)customTargetImage;
-(void)setCustomTargetImage:(UIImage *)arg1 ;
-(void)setState:(long long)arg1 forTileIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)resetTilesAnimated:(BOOL)arg1 ;
-(void)targetView:(id)arg1 recognizer:(id)arg2 ;
-(id)_makeTargetView;
-(long long)numberOfTiles;
-(long long)stateForTileIndex:(long long)arg1 ;
-(ORKGridSize)gridSize;
-(void)setDelegate:(id<_ORKSpatialSpanMemoryGameViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<_ORKSpatialSpanMemoryGameViewDelegate>)delegate;
-(BOOL)isAccessibilityElement;
@end

