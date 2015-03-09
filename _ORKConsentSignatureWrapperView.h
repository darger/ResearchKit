/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:12 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ResearchKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, ORKSignatureView, ORKTextButton;

@interface _ORKConsentSignatureWrapperView : UIView {

	NSArray* _constraints;
	BOOL _clearButtonEnabled;
	ORKSignatureView* _signatureView;
	ORKTextButton* _clearButton;

}

@property (nonatomic,retain) ORKSignatureView * signatureView;              //@synthesize signatureView=_signatureView - In the implementation block
@property (nonatomic,retain) ORKTextButton * clearButton;                   //@synthesize clearButton=_clearButton - In the implementation block
@property (assign,nonatomic) BOOL clearButtonEnabled;                       //@synthesize clearButtonEnabled=_clearButtonEnabled - In the implementation block
-(void)setClearButtonEnabled:(BOOL)arg1 ;
-(ORKSignatureView *)signatureView;
-(void)setSignatureView:(ORKSignatureView *)arg1 ;
-(void)setClearButton:(ORKTextButton *)arg1 ;
-(BOOL)clearButtonEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)updateConstraints;
-(ORKTextButton *)clearButton;
@end

