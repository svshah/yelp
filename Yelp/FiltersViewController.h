//
//  FiltersViewController.h
//  Yelp
//
//  Created by Sameer Shah on 2/1/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FiltersViewController;

@protocol FilterViewControllerDelegate <NSObject>

- (void) filtersViewController:(FiltersViewController *) filtersViewController didChangeFilters:(NSDictionary *) filters;

@end

@interface FiltersViewController : UIViewController

@property (nonatomic, weak) id<FilterViewControllerDelegate> delegate;

@end
