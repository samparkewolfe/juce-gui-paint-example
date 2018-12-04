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
#include "NewComponent.h"

NewComponent::NewComponent ()
{
    m_textToDisplay = "Hello World!";
    
    addAndMakeVisible(m_slider);
    m_slider.addListener(this);
    m_slider.setSliderStyle(Slider::LinearBarVertical);
    m_slider.setRange(0.0, 1.0);
    m_slider.setValue(0.5);
    
    addAndMakeVisible(m_groupComponent);
    m_groupComponent.setText("My Group");
}

NewComponent::~NewComponent()
{
    
}

//==============================================================================
void NewComponent::paint (Graphics& g)
{    
    g.drawText(m_textToDisplay, 0, 0, getWidth(), 20, juce::Justification::left);
}

void NewComponent::resized()
{
    auto area = getLocalBounds();
    
    area.reduce(20, 20);
    
    m_groupComponent.setBounds(area);
    
    area.reduce(20, 30);
    
    m_slider.setBounds(area.removeFromLeft(50));
}

void NewComponent::sliderValueChanged(juce::Slider *slider)
{
    // get use the changed slider value
}
