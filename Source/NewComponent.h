/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class NewComponent  : public juce::Component,
public juce::Slider::Listener
{
public:
    NewComponent ();
    ~NewComponent();

    void paint (juce::Graphics& g) override;
    void resized() override;
    
    void sliderValueChanged(juce::Slider* slider) override;

private:

    juce::String m_textToDisplay;
    juce::Slider m_slider;
    
    juce::GroupComponent m_groupComponent;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewComponent)
};
