/*
* This header is generated by classdump-dyld 0.7
* on Monday, March 9, 2015 at 8:56:14 PM Greenwich Mean Time
* Operating System: Version 8.1 (Build 12B411)
* Image Source: /private/var/mobile/Containers/Bundle/Application/59532D3A-E75D-48D6-95BE-6EFEA922624C/Parkinson.app/Frameworks/ResearchKit.framework/ResearchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ResearchKit/ORKSurveyAnswerCell.h>

@class UIDatePicker;

@interface ORKSurveyAnswerCellForTimeInterval : ORKSurveyAnswerCell {

	long long _stepInMinute;
	UIDatePicker* _picker;

}

@property (nonatomic,retain) UIDatePicker * picker;              //@synthesize picker=_picker - In the implementation block
+(double)suggestedCellHeightForView:(id)arg1 ;
-(id)_impliedAnswerFormat;
-(void)_answerDidChange;
-(void)_setupScale;
-(void)prepareView;
-(void)layoutSubviews;
-(void)valueChanged:(id)arg1 ;
-(UIDatePicker *)picker;
-(void)setPicker:(UIDatePicker *)arg1 ;
@end
