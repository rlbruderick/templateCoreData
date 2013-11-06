//
//  templateDetailViewController.h
//  templateCoreData
//
//  Created by apple on 11/6/13.
//  Copyright (c) 2013 i-code-apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface templateDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
