//
//  RadioButtonCell.m
//  Yelp
//
//  Created by Sameer Shah on 2/2/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import "RadioButtonCell.h"

@interface RadioButtonCell()


@end

@implementation RadioButtonCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
    _buttonSelected = selected;
    
}

- (void)setSelected:(BOOL)selected {
    [self setSelected:selected animated:NO];
}

@end
