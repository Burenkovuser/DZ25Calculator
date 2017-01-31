//
//  ViewController.h
//  DZ25Buttons
//
//  Created by Vasilii on 31.01.17.
//  Copyright © 2017 Vasilii Burenkov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *displayResultLabel;

- (IBAction)numberPressrd:(UIButton *)sender;

@end

