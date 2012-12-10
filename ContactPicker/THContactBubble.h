//
//  THContactBubble.h
//  ContactPicker
//
//  Created by Tristan Himmelman on 11/2/12.
//  Copyright (c) 2012 Tristan Himmelman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "THBubbleColor.h"

@class THContactBubble;

@protocol THContactBubbleDelegate <NSObject>

- (void)contactBubbleWasSelected:(THContactBubble *)contactBubble;
- (void)contactBubbleShouldBeRemoved:(THContactBubble *)contactBubble;

@end

@interface THContactBubble : UIView <UITextViewDelegate>

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UITextView *textView; // used to capture keyboard touches when view is selected
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, assign) id <THContactBubbleDelegate>delegate;
@property (nonatomic, retain) CAGradientLayer *gradientLayer;

@property (nonatomic, retain) THBubbleColor *color;
@property (nonatomic, retain) THBubbleColor *selectedColor;

- (id)initWithName:(NSString *)name;
- (id)initWithName:(NSString *)name
             color:(THBubbleColor *)color
     selectedColor:(THBubbleColor *)selectedColor;

- (void)select;
- (void)unSelect;
- (void)setFont:(UIFont *)font;

@end
