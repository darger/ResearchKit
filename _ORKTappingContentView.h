/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKActiveStepCustomView.h>

@class NSArray, UIView, ORKRoundTappingButton, ORKSubheadlineLabel, ORKTapCountLabel, UIProgressView;

@interface _ORKTappingContentView : ORKActiveStepCustomView {

	NSArray* _constraints;
	long long _screenType;
	UIView* _buttonContainer;
	ORKRoundTappingButton* _tapButton1;
	ORKRoundTappingButton* _tapButton2;
	ORKSubheadlineLabel* _tapCaptionLabel;
	ORKTapCountLabel* _tapCountLabel;
	UIProgressView* _progressView;

}

@property (nonatomic,retain) ORKRoundTappingButton * tapButton1;                 //@synthesize tapButton1=_tapButton1 - In the implementation block
@property (nonatomic,retain) ORKRoundTappingButton * tapButton2;                 //@synthesize tapButton2=_tapButton2 - In the implementation block
@property (nonatomic,retain) ORKSubheadlineLabel * tapCaptionLabel;              //@synthesize tapCaptionLabel=_tapCaptionLabel - In the implementation block
@property (nonatomic,retain) ORKTapCountLabel * tapCountLabel;                   //@synthesize tapCountLabel=_tapCountLabel - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                      //@synthesize progressView=_progressView - In the implementation block
-(void)resetStep:(id)arg1 ;
-(void)finishStep:(id)arg1 ;
-(ORKRoundTappingButton *)tapButton1;
-(ORKRoundTappingButton *)tapButton2;
-(void)setTapButton1:(ORKRoundTappingButton *)arg1 ;
-(void)setTapButton2:(ORKRoundTappingButton *)arg1 ;
-(ORKSubheadlineLabel *)tapCaptionLabel;
-(void)setTapCaptionLabel:(ORKSubheadlineLabel *)arg1 ;
-(ORKTapCountLabel *)tapCountLabel;
-(void)setTapCountLabel:(ORKTapCountLabel *)arg1 ;
-(id)init;
-(void)setTapCount:(unsigned long long)arg1 ;
-(void)tintColorDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(void)updateConstraints;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
@end
