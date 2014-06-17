//
//  DetailViewController.h
//  0617
//
//  Created by CHANG PURSLL on 2014/6/17.
//  Copyright (c) 2014年 EUPFIN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
