import graphviz

def generate_structogram():
    # Create a new Graphviz Digraph
    dot = graphviz.Digraph(comment='Detailed Structogram for Main Function')

    # Add the major blocks of the program
    dot.node('Start', 'Start')
    dot.node('LoadSettings', 'Load Settings')
    dot.node('InitBaro', 'Initialize Barometer')
    dot.node('InitLcd', 'Initialize LCD')
    dot.node('StartTimers', 'Start Timers')
    dot.node('MainLoop', 'Main Loop')
    dot.node('BatteryCheck', 'Check Battery Update Time')
    dot.node('ReadVoltage', 'Read Battery Voltage')
    dot.node('BaroCheck', 'Check Barometer Update Time')
    dot.node('ReadBaro', 'Read Barometer')
    dot.node('ToneCheck', 'Check Tone Update Time')
    dot.node('CalculateTone', 'Calculate Tone Based on Vertical Speed')
    dot.node('ScreenCheck', 'Check LCD Update Time')
    dot.node('UpdateLcd', 'Update LCD Display')
    dot.node('End', 'End')

    # Define the flow from start to main loop
    dot.edge('Start', 'LoadSettings')
    dot.edge('LoadSettings', 'InitBaro')
    dot.edge('InitBaro', 'InitLcd')
    dot.edge('InitLcd', 'StartTimers')
    dot.edge('StartTimers', 'MainLoop')

    # Main loop flow with more details
    dot.edge('MainLoop', 'BatteryCheck', label='Start main loop')
    dot.edge('BatteryCheck', 'ReadVoltage', label='BATTERY_UPDATE_TIME met')
    dot.edge('BatteryCheck', 'BaroCheck', label='BATTERY_UPDATE_TIME not met')
    dot.edge('ReadVoltage', 'BaroCheck', label='Read battery voltage')
    
    dot.edge('BaroCheck', 'ReadBaro', label='BARO_UPDATE_TIME met')
    dot.edge('BaroCheck', 'ToneCheck', label='BARO_UPDATE_TIME not met')
    dot.edge('ReadBaro', 'ToneCheck', label='Read barometer data')
    
    dot.edge('ToneCheck', 'CalculateTone', label='TONE_UPDATE_TIME met')
    dot.edge('ToneCheck', 'ScreenCheck', label='TONE_UPDATE_TIME not met')
    dot.edge('CalculateTone', 'ScreenCheck', label='Calculate tone based on vertical speed')

    # Screen update flow
    dot.edge('ScreenCheck', 'UpdateLcd', label='SCREEN_UPDATE_TIME met')
    dot.edge('ScreenCheck', 'MainLoop', label='SCREEN_UPDATE_TIME not met')
    dot.edge('UpdateLcd', 'MainLoop', label='Update the LCD display')

    # End loop
    dot.edge('MainLoop', 'End', label='Exit main loop')

    # Save and render the diagram
    dot.render('pap-detailliert', format='png', cleanup=True)

    print("Detailed pap saved as 'pap-detailliert.png'")

if __name__ == '__main__':
    generate_structogram()

