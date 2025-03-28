from graphviz import Digraph

# Create a new directed graph
dot = Digraph(comment='Program Flow')

# Define function blocks (representing logical blocks or function calls)
dot.node('Start', 'Start')
dot.node('LoadSettings', 'LoadSettings()')
dot.node('InitHardware', 'InitHardware()')
dot.node('LoopStart', 'while (1) {')

dot.node('BatteryRead', 'ReadBattery()')
dot.node('BarometerRead', 'ReadBaro()')
dot.node('ToneGeneration', 'GenerateTone()')
dot.node('LCDUpdate', 'UpdateLcd()')

dot.node('EndLoop', '}')

dot.node('End', 'End')

# Add edges between the nodes to represent flow control
dot.edge('Start', 'LoadSettings')
dot.edge('LoadSettings', 'InitHardware')
dot.edge('InitHardware', 'LoopStart')

# Loop Start and the main loop body
dot.edge('LoopStart', 'BatteryRead')
dot.edge('BatteryRead', 'BarometerRead')
dot.edge('BarometerRead', 'ToneGeneration')
dot.edge('ToneGeneration', 'LCDUpdate')
dot.edge('LCDUpdate', 'EndLoop')

# Loop back to start of loop
dot.edge('EndLoop', 'LoopStart')

# End of program
dot.edge('EndLoop', 'End')

# Render and Digraphsplay the graph
dot.render('pap', format='png', cleanup=True)
print("pap saved as 'pap.png'")
