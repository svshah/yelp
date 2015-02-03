//
//  RadioButtonCell.h
//  Yelp
//
//  Created by Sameer Shah on 2/2/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RadioButtonCell;

@protocol RadioButtonCellDelegate <NSObject>

- (void) radioButtonCell:(RadioButtonCell *)cell didSelectValue:(BOOL) value;

@end


@interface RadioButtonCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (nonatomic, assign) BOOL buttonSelected;
@property (nonatomic, weak) id<RadioButtonCellDelegate> delegate;

//- (void) setOn:(BOOL)on animated: (BOOL) animated;
- (void) setSelected:(BOOL)selected animated:(BOOL)animated;

@end
