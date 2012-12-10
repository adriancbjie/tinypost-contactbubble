//
//  THBubbleColor.h
//  ContactPicker
//
//  Created by Dmitry Vorobjov on 12/6/12.
//  Copyright (c) 2012 Tristan Himmelman. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface THBubbleColor : NSObject

@property (nonatomic, retain) UIColor *gradientTop;
@property (nonatomic, retain) UIColor *gradientBottom;
@property (nonatomic, retain) UIColor *border;

- (id)initWithGradientTop:(UIColor *)gradientTop
           gradientBottom:(UIColor *)gradientBottom
                   border:(UIColor *)border;

@end
