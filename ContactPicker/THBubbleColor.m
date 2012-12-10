//
//  THBubbleColor.m
//  ContactPicker
//
//  Created by Dmitry Vorobjov on 12/6/12.
//  Copyright (c) 2012 Tristan Himmelman. All rights reserved.
//

#import "THBubbleColor.h"

@implementation THBubbleColor

- (void)dealloc{
    [_gradientBottom release];
    [_gradientTop release];
    [_border release];
    
    [super dealloc];
}

- (id)initWithGradientTop:(UIColor *)gradientTop
           gradientBottom:(UIColor *)gradientBottom
                   border:(UIColor *)border {
    if (self = [super init]) {
        self.gradientTop = gradientTop;
        self.gradientBottom = gradientBottom;
        self.border = border;
    }
    return self;
}

@end
