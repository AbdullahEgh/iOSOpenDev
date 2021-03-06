/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBAwayListItemCell.h"
#import "SpringBoard-Structs.h"

@class NSArray;
@protocol SBAwayListCellButtonHandler;

@interface SBAwaySystemAlertCell : SBAwayListItemCell {
	NSArray *_buttons;	// 264 = 0x108
	id<SBAwayListCellButtonHandler> _buttonHandler;	// 268 = 0x10c
	BOOL _horizontalButtonLayout;	// 272 = 0x110
}
+ (float)rowHeightForTitle:(id)title message:(id)message rowWidth:(float)width buttonLabels:(id)labels;	// 0x18c771
+ (id)_buttonBackgroundImage;	// 0x18f575
+ (float)_buttonWidthForText:(id)text;	// 0x18f505
+ (id)_buttonFont;	// 0x18c8e5
+ (float)_buttonHorizontalInset;	// 0x18aebd
+ (float)_buttonVerticalInset;	// 0x18aec5
- (void)dealloc;	// 0x18f4b9
- (void)_forwardButtonPressToHandler:(id)handler;	// 0x18fe41
- (void)_createContentView;	// 0x18c701
- (void)setButtonLabels:(id)labels handler:(id)handler isAlarm:(BOOL)alarm;	// 0x18fa0d
- (CGRect)_cellContentViewFrame;	// 0x18f88d
- (float)_getMaxButtonWidth;	// 0x18f7e5
- (void)layoutSubviews;	// 0x18f605
@end

